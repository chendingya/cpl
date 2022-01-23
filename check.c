//
// Created by lenovo on 2021/12/14.
//
//2048小游戏（1.失败和胜利提示； 2.记录每次游戏的得分和历史最佳得分； 3.可以弹出暂停界面；）
#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <pthread.h>
#include <mmsystem.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>


void Quit();
void Move_w();
void Move_a();
void Move_s();
void Move_d();
void New();
void Load();
void Begin();
void PrintScore();
void PrintBest();
void Restart();
void LoadCell(int value,  int ma_1, int ma_2);
bool Gameover();
bool Win();
bool Suspend = false;
void Init();
void Refresh();
void LoadBackground();
void PrintGameOver();
void PrintWin();
void PrintSuspend();

int a[5][5]; //棋盘
int b[5][5]; //备份
int score;
int x_1[5] = {[1] = 60, [2] = 194, [3] = 328, [4] = 460};
int y_1[5] = {[1] = 330, [2] = 465, [3] = 598, [4] = 732};
bool mov[5][5];
int best;

//初始化格子
SDL_Surface *CellSurface = NULL;
SDL_Texture *CellTexture = NULL;
SDL_Rect CellRect;

//初始化窗口
SDL_Window *Window = NULL;
SDL_Renderer *Renderer = NULL;

//初始化图形(主页面）
SDL_Surface *MainBackGroundSurface = NULL;
SDL_Texture *MainBackGroundTexture = NULL;
SDL_Rect MainBackGroundRect;

//初始化游戏页面
SDL_Surface *PlayBackGroundSurface = NULL;
SDL_Texture *PlayBackGroundTexture = NULL;

//Best
TTF_Font *BestFont = NULL;
SDL_Surface *BestSurface = NULL;
SDL_Texture *BestTexture = NULL;
SDL_Rect BestRect;

//Score
TTF_Font *ScoreFont = NULL;
SDL_Surface *ScoreSurface = NULL;
SDL_Texture *ScoreTexture = NULL;
SDL_Rect ScoreRect;

SDL_Color FontColor = {0, 0, 0, 255};

SDL_Surface *GameOverSurface = NULL;
SDL_Texture *GameOverTexture = NULL;
SDL_Rect GameOverRect;

SDL_Surface *WinSurface = NULL;
SDL_Texture *WinTexture = NULL;
SDL_Rect WinRect;

SDL_Surface *SuspendSurface = NULL;
SDL_Texture *SuspendTexture = NULL;
SDL_Rect SuspendRect;

int SDL_main(int argc, char *argv[]) {
    memcpy(b, a, sizeof(a));			// 将 a 备份至 b
    memset(mov, false, sizeof(mov)); //初始化mov

    SDL_Init (SDL_INIT_VIDEO);
    TTF_Init();
    Window = SDL_CreateWindow("wy-2048", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 920, SDL_WINDOW_SHOWN);
    Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED);
    SDL_Event MainEvent;

    Load();

    SDL_RenderClear(Renderer);
    SDL_RenderCopy(Renderer, MainBackGroundTexture, NULL, &MainBackGroundRect);
    SDL_RenderPresent(Renderer);

    while (SDL_WaitEvent(&MainEvent)) {
        switch (MainEvent.type) {
            case SDL_QUIT:
                Quit();
                break;
            case SDL_KEYDOWN:  //键盘事件
                switch (MainEvent.key.keysym.sym) {
                    case SDLK_ESCAPE: Quit(); break;
                    case SDLK_RETURN: Begin(); break;
                    case SDLK_w: LoadBackground();Move_w();New();PrintScore(); PrintBest(); Refresh();PrintGameOver();PrintWin();break;
                    case SDLK_a:LoadBackground();Move_a();New();PrintScore(); PrintBest(); Refresh();PrintGameOver();PrintWin();break;
                    case SDLK_s: LoadBackground();Move_s();New();PrintScore(); PrintBest(); Refresh();PrintGameOver();PrintWin();break;
                    case SDLK_d: LoadBackground();Move_d();New();PrintScore(); PrintBest(); Refresh();PrintGameOver();PrintWin();break;
                    case SDLK_UP: LoadBackground();Move_w();New();PrintScore(); PrintBest(); Refresh();PrintGameOver();PrintWin();break;
                    case SDLK_LEFT: LoadBackground();Move_a();New();PrintScore(); PrintBest(); Refresh();PrintGameOver();PrintWin();break;
                    case SDLK_RIGHT: LoadBackground();Move_d();New();PrintScore(); PrintBest(); Refresh();PrintGameOver();PrintWin();break;
                    case SDLK_DOWN: LoadBackground();Move_s();New();PrintScore(); PrintBest(); Refresh();PrintGameOver();PrintWin();break;
                    case SDLK_r: if (Gameover() || Win()) Restart();
                    case SDLK_SPACE:
                        PrintSuspend(); Suspend = true;
                        break;
                    case SDLK_h: PrintScore(); PrintBest(); break;
                    default: break;
                }
                break;
            case SDL_MOUSEBUTTONDOWN: //鼠标事件
                printf("(%d, %d)\n", MainEvent.button.x, MainEvent.button.y);
                break;
            case SDL_MOUSEBUTTONUP:
                if (MainEvent.button.x > 365 && MainEvent.button.x < 597 && MainEvent.button.y > 185 && MainEvent.button.y < 260) {
                    Restart();
                    printf("put down h to see your score\n"); }
                if (MainEvent.button.x > 123 && MainEvent.button.x < 516 && MainEvent.button.y > 757 && MainEvent.button.y < 873) {
                    Begin();
                    printf("put down h to see your score\n"); }
                printf("(%d, %d)\n", MainEvent.button.x, MainEvent.button.y);
                if (Suspend == true && MainEvent.button.x > 146 && MainEvent.button.x < 212 && MainEvent.button.y > 574 && MainEvent.button.y < 668 ) {Suspend = false; Quit();}
                if (Suspend == true && MainEvent.button.x > 286 && MainEvent.button.x < 352 && MainEvent.button.y > 574 && MainEvent.button.y < 668 ) {Suspend = false; LoadBackground();PrintScore(); PrintBest(); Refresh();}
                if (Suspend == true && MainEvent.button.x > 429 && MainEvent.button.x < 491 && MainEvent.button.y > 574 && MainEvent.button.y < 668 ){Suspend = false; Restart();}
                break;
            case SDL_MOUSEMOTION:
                break;
            default :
                break;
        }
    }
    Quit();
}

void Quit() {
    SDL_FreeSurface(MainBackGroundSurface);
    SDL_FreeSurface(PlayBackGroundSurface);
    SDL_FreeSurface(ScoreSurface);
    SDL_FreeSurface(BestSurface);

    SDL_DestroyTexture(MainBackGroundTexture);
    SDL_DestroyTexture(PlayBackGroundTexture);
    SDL_DestroyTexture(ScoreTexture);
    SDL_DestroyTexture(BestTexture);

    TTF_CloseFont(ScoreFont);
    TTF_CloseFont(BestFont);

    SDL_DestroyWindow(Window);
    SDL_DestroyRenderer(Renderer);
    SDL_Quit();
}

void Load() {
    MainBackGroundSurface = IMG_Load("MainBackGround.jpeg");
    MainBackGroundTexture = SDL_CreateTextureFromSurface(Renderer,  MainBackGroundSurface);
    MainBackGroundRect.x = 0;
    MainBackGroundRect.y = 0;
    MainBackGroundRect.w = MainBackGroundSurface ->w;
    MainBackGroundRect.h = MainBackGroundSurface ->h;

    PlayBackGroundSurface = IMG_Load("PlayBackGround.jpg");
    PlayBackGroundTexture = SDL_CreateTextureFromSurface(Renderer,  PlayBackGroundSurface);

    ScoreFont = TTF_OpenFont("Inter-UI-Black.TTF" , 50);
    BestFont = TTF_OpenFont("Inter-UI-Black.TTF" , 50);

    GameOverSurface = IMG_Load("GameOver.jpeg");
    GameOverTexture = SDL_CreateTextureFromSurface(Renderer,  GameOverSurface);
    GameOverRect.x = 127;
    GameOverRect.y = 291;
    GameOverRect.w = GameOverSurface ->w;
    GameOverRect.h = GameOverSurface ->h;

    WinSurface = IMG_Load("Win.jpeg");
    WinTexture = SDL_CreateTextureFromSurface(Renderer,  WinSurface);
    WinRect.x = 127;
    WinRect.y = 291;
    WinRect.w = WinSurface ->w;
    WinRect.h = WinSurface ->h;

    SuspendSurface = IMG_Load("Suspend.jpeg");
    SuspendTexture = SDL_CreateTextureFromSurface(Renderer,  SuspendSurface);
    SuspendRect.x = 127;
    SuspendRect.y = 291;
    SuspendRect.w = SuspendSurface ->w;
    SuspendRect.h = SuspendSurface ->h;
}

void Begin() {
    printf ("Welcome to the game !\n");
    LoadBackground();
    Init();
    PrintBest();
    PrintScore();
    Refresh();
}

void PrintScore() {
    char c[100];
    sprintf(c, "%d", score);
    char d[100] = "Score:";
    for (int i = 0; i < 10; i++) {
        d[i+6] = c[i];
    }
    ScoreSurface = TTF_RenderUTF8_Blended(ScoreFont, d, FontColor);
    ScoreTexture = SDL_CreateTextureFromSurface(Renderer, ScoreSurface);
    ScoreRect.x = 370; ScoreRect.y = 35; ScoreRect.w = ScoreSurface ->w; ScoreRect.h = ScoreSurface ->h;
    SDL_RenderCopy(Renderer, ScoreTexture, NULL, &ScoreRect);
    SDL_RenderPresent(Renderer);
}

void PrintBest() {
    char c[100];
    sprintf(c, "%d", best);
    char d[100] = "Best:";
    for (int i = 0; i < 10; i++) {
        d[i+5] = c[i];
    }
    BestSurface = TTF_RenderUTF8_Blended(BestFont, d, FontColor);
    BestTexture = SDL_CreateTextureFromSurface(Renderer, BestSurface);
    BestRect.x = 370; BestRect.y = 95; BestRect.w = BestSurface ->w; BestRect.h = BestSurface ->h;
    SDL_RenderCopy(Renderer, BestTexture, NULL, &BestRect);
    SDL_RenderPresent(Renderer);
}

void Init () {
    score = 0;
    memset(a, 0, sizeof(a));
    int x1 = rand() % 4 + 1, y1 = rand() % 4 + 1, x2 = rand() % 4 + 1, y2 = rand() % 4 + 1;	// 随机生成两个初始点
    a[x1][y1] = a[x2][y2] = 2;				// 初始点初始化为 2
}

bool Gameover () {
    // 对于任意一个位置，该位置为空 或 四周有位置上的数字与该位置上数字相等，说明可继续移动（游戏可继续）
    for (int i = 1; i <= 4; i++)
        for (int j = 1; j <= 4; j++)
            if (!a[i][j] || a[i][j] == a[i + 1][j] || a[i][j] == a[i - 1][j] || a[i][j] == a[i][j + 1] || a[i][j] == a[i][j - 1])return false;
    // 否则游戏结束
    return true;
}

bool Win() {
    // 有任意一个位置达到 2048，则胜利
    for (int i = 1; i <= 4; i++)
        for (int j = 1; j <= 4; j++)
            if (a[i][j] == 2048)return true;
    return false;
}

void Restart() {
    printf ("NEW GAME !\n");
    SDL_RenderClear(Renderer);
    SDL_RenderCopy(Renderer, PlayBackGroundTexture, NULL, NULL);
    SDL_RenderPresent(Renderer);
    Init();
    PrintBest();
    PrintScore();
    Refresh();
}

void LoadCell(int value, int ma_1, int ma_2) {
    switch (value) {
        case 2: {CellSurface = IMG_Load("2.png");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = ma_1;
            CellRect.y = ma_2;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        }
        case 4: {CellSurface = IMG_Load("4.png");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = ma_1;
            CellRect.y = ma_2;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        }
        case 8: {CellSurface = IMG_Load("8.png");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = ma_1;
            CellRect.y = ma_2;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        }
        case 16: {CellSurface = IMG_Load("16.png");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = ma_1;
            CellRect.y = ma_2;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        }
        case 32: {CellSurface = IMG_Load("32.png");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = ma_1;
            CellRect.y = ma_2;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        }
        case 64: {CellSurface = IMG_Load("64.png");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = ma_1;
            CellRect.y = ma_2;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        }
        case 128: {CellSurface = IMG_Load("128.png");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = ma_1;
            CellRect.y = ma_2;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        }
        case 256: {CellSurface = IMG_Load("256.png");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = ma_1;
            CellRect.y = ma_2;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        }
        case 512: {CellSurface = IMG_Load("512.png");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = ma_1;
            CellRect.y = ma_2;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        }
        case 1024: {CellSurface = IMG_Load("1024.jpg");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = ma_1;
            CellRect.y = ma_2;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        }
        case 2048: {CellSurface = IMG_Load("2048.jfif");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = ma_1;
            CellRect.y = ma_2;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
            default: break;
        }
    }
}

void Refresh() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            if (a[i][j]) {
                LoadCell(a[i][j], x_1[j], y_1[i]);
                SDL_RenderCopy(Renderer, CellTexture, NULL, &CellRect);
                SDL_RenderPresent(Renderer);
            }
        }
    }
}

void Move_w() {
    memcpy(b, a, sizeof(a));
    for (int k = 1; k <= 4; k++) {
        for (int j = 1; j <= 4; j++) {
            for (int i = 2; i <= 4; i++) {
                if (a[i - 1][j] == 0) {
                    a[i - 1][j] = a[i][j];
                    a[i][j] = 0;
                }
            }
        }
    }
    for (int j = 1; j <= 4; j++) {
        for (int i = 2; i <= 4; i++) {
            if (a[i][j] != 0) {
                if (a[i][j] == a[i - 1][j]) {
                    a[i - 1][j] = 2*a[i-1][j];
                    score += a[i - 1][j];
                    a[i][j] = 0;
                }
            }
        }
    }
    for (int k = 1; k <= 4; k++) {
        for (int j = 1; j <= 4; j++) {
            for (int i = 2; i <= 4; i++) {
                if (a[i - 1][j] == 0) {
                    a[i - 1][j] = a[i][j];
                    a[i][j] = 0;
                }
            }
        }
    }
}

void Move_a() {
    memcpy(b, a, sizeof(a));
    for (int k = 1; k <= 4; k++) {
        for (int i = 1; i <= 4; i++) {
            for (int j = 2; j <= 4; j++) {
                if (a[i][j - 1] == 0) {
                    a[i][j - 1] = a[i][j];
                    a[i][j] = 0;
                }
            }
        }
    }
    for (int i = 1; i <= 4; i++) {
        for (int j = 2; j <= 4; j++) {
            if (a[i][j] != 0) {
                if (a[i][j] == a[i][j - 1]) {
                    a[i][j - 1] = 2*a[i][j - 1];
                    score += a[i][j - 1];
                    a[i][j] = 0;
                }
            }
        }
    }
    for (int k = 1; k <= 4; k++) {
        for (int i = 1; i <= 4; i++) {
            for (int j = 2; j <= 4; j++) {
                if (a[i][j - 1] == 0) {
                    a[i][j - 1] = a[i][j];
                    a[i][j] = 0;
                }
            }
        }
    }
}

void Move_s() {
    memcpy(b, a, sizeof(a));
    for (int k = 1; k <= 4; k++) {
        for (int j = 1; j <= 4; j++) {
            for (int i = 3; i >= 1; i--) {
                if (a[i + 1][j] == 0) {
                    a[i + 1][j] = a[i][j];
                    a[i][j] = 0;
                }
            }
        }
    }
    for (int j = 1; j <= 4; j++) {
        for (int i = 3; i >=1; i--) {
            if (a[i][j] != 0) {
                if (a[i][j] == a[i + 1][j]) {
                    a[i + 1][j] = 2*a[i+1][j];
                    score += a[i + 1][j];
                    a[i][j] = 0;
                }
            }
        }
    }
    for (int k = 1; k <= 4; k++) {
        for (int j = 1; j <= 4; j++) {
            for (int i = 3; i >= 1; i--) {
                if (a[i + 1][j] == 0) {
                    a[i + 1][j] = a[i][j];
                    a[i][j] = 0;
                }
            }
        }
    }
}

void Move_d() {
    memcpy(b, a, sizeof(a));
    for (int k = 1; k <= 4; k++) {
        for (int i = 1; i <= 4; i++) {
            for (int j = 3; j >= 1; j--) {
                if (a[i][j + 1] == 0) {
                    a[i][j + 1] = a[i][j];
                    a[i][j] = 0;
                }
            }
        }
    }
    for (int i = 1; i <= 4; i++) {
        for (int j = 3; j >= 1; j--) {
            if (a[i][j] != 0) {
                if (a[i][j] == a[i][j + 1]) {
                    a[i][j + 1] = 2*a[i][j + 1];
                    score += a[i][j + 1];
                    a[i][j] = 0;
                }
            }
        }
    }
    for (int k = 1; k <= 4; k++) {
        for (int i = 1; i <= 4; i++) {
            for (int j = 3; j >= 1; j--) {
                if (a[i][j + 1] == 0) {
                    a[i][j + 1] = a[i][j];
                    a[i][j] = 0;
                }
            }
        }
    }
}

void New() {
    bool change = false;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            if (a[i][j] != b[i][j]) {
                change = true;
                break;
            }
        }
    }
    if (!change)return;
    int x, y;
    do {
        x = rand() % 4 + 1;
        y = rand() % 4 + 1;
    } while (a[x][y]);
    // 有 1/6 的几率生成数字为 4，其余情况生成数字为 2
    int n = rand() % 6;
    if (n == 5)a[x][y] = 4;
    else a[x][y] = 2;
    // 更新最佳纪录
    best = max(best, score);
}

void LoadBackground() {
    SDL_RenderClear(Renderer);
    SDL_RenderCopy(Renderer, PlayBackGroundTexture, NULL, NULL);
    SDL_RenderPresent(Renderer);
}

void PrintGameOver() {
    if (Gameover()) {
        printf("GameOver!\nPress R to try again!\n");
        SDL_RenderCopy(Renderer, GameOverTexture, NULL, &GameOverRect);
        SDL_RenderPresent(Renderer);
    }
}

void PrintWin() {
    if (Win()) {
        printf("Congratulations!\nPress R to restart\n");
        SDL_RenderCopy(Renderer, WinTexture, NULL, &WinRect);
        SDL_RenderPresent(Renderer);
    }
}

void PrintSuspend() {
    printf("The Game has been suspended !\n");
    SDL_RenderCopy(Renderer, SuspendTexture, NULL, &SuspendRect);
    SDL_RenderPresent(Renderer);
}