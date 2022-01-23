//
// Created by 15845 on 2021/12/19.
//
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"
#include <time.h>
#include <windows.h>

/**
 * function:
 */

void PLAY();
void LoadBackGround();
void QUIT();
void LOAD();
void PrintDesk();
void PrintScore();
void PrintBestScore();
void W_move();
void A_move();
void S_move();
void D_move();
void Rand();
void PrintDesk();
void PrintCell(int i, int j, int x, int y);
void Restart();
void Suspend();
void kaigua();
void PrintTime(double duration);
bool suspend = false;

/**
 * variable:
 */
int desk[6][6];
int copy[6][6];//6 * 6 的棋盘只用到中心处 4 * 4
int score; // 得分
int best; //最高分
int OperateTimes; //操作次数

/**
 * Declare:
 */
SDL_Window *Window = NULL;//窗口
SDL_Renderer *Renderer = NULL;//渲染器、画笔

//MainBackGround:
SDL_Surface *MainBackGroundSurface = NULL;//图形
SDL_Texture *MainBackGroundTexture = NULL;//纹理：转变为画笔能识别的轨迹
SDL_Rect MainBackGroundRect;//矩形信息：长、宽、高
//PlayBackGround:
SDL_Surface *PlayBackGroundSurface = NULL;
SDL_Texture *PlayBackGroundTexture = NULL;
SDL_Rect PlayBackGroundRect;
//cell
SDL_Surface *CellSurface = NULL;
SDL_Texture *CellTexture = NULL;
SDL_Rect CellRect;


//字体 Score
TTF_Font *ScoreFont = NULL;
SDL_Surface *ScoreSurface = NULL;
SDL_Texture *ScoreTexture = NULL;
SDL_Rect ScoreRect;
SDL_Color FontColor = {255,255,255,255};
SDL_Color ClockColor = {10,0,56,255};
//Best
TTF_Font *BestFont = NULL;
SDL_Surface *BestSurface = NULL;
SDL_Texture *BestTexture = NULL;
SDL_Rect BestRect;
//clock
TTF_Font *ClockFont = NULL;
SDL_Surface *ClockSurface = NULL;
SDL_Texture *ClockTexture = NULL;
SDL_Rect ClockRect;

//win
SDL_Surface *WinSurface = NULL;
SDL_Texture *WinTexture = NULL;
SDL_Rect WinRect;
//GameOver
SDL_Surface *GameOverSurface = NULL;
SDL_Texture *GameOverTexture = NULL;
SDL_Rect GameOverRect;
//suspend
SDL_Surface *SuspendSurface = NULL;
SDL_Texture *SuspendTexture = NULL;
SDL_Rect SuspendRect;

/**
 * main function
 * @param argc
 * @param argv
 * @return
 */
int SDL_main (int argc, char *argv[]) {
    /**
     * Init
     */
    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();
    /**
     * clock
     */
    clock_t start, finish;
    double duration;
    start = clock();

    /**
     * create the window and load;
     */
    Window = SDL_CreateWindow("2048 which you can never achieve", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,600,800,SDL_WINDOW_SHOWN);
    Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED);
    SDL_Event MainEvent;

    LOAD();

    /**
     * draw Renderer to window
     */
    SDL_RenderClear(Renderer);//把当前画笔显示的东西清空
    SDL_RenderCopy(Renderer, MainBackGroundTexture,NULL,&MainBackGroundRect);//把纹理复制到画笔
    SDL_RenderPresent(Renderer);//刷新画笔

    Rand();

    /**
     * 键盘事件：
     */
    while (SDL_WaitEvent(&MainEvent)) {
        switch (MainEvent.type) {
            case SDL_QUIT:
                QUIT();
                break;
            case SDL_KEYDOWN:
                switch (MainEvent.key.keysym.sym) {
                    case SDLK_RETURN:
                        // 回车键
                        PLAY();
                        break;
                    case SDLK_ESCAPE: QUIT();break;

                    /**
                     * 基本操作键：
                     */
                    case SDLK_a:
                        // a
                        A_move();LoadBackGround();PrintDesk();    PrintScore();PrintBestScore();break;
                    case SDLK_d:
                        // d
                        D_move();LoadBackGround();PrintDesk();    PrintScore();PrintBestScore();break;
                    case SDLK_w:
                        // w
                        W_move();LoadBackGround();PrintDesk();    PrintScore();PrintBestScore();break;
                    case SDLK_s:
                        // s
                        S_move();LoadBackGround();PrintDesk();    PrintScore();PrintBestScore();break;
                    case SDLK_UP:
                        W_move();LoadBackGround();PrintDesk();    PrintScore();PrintBestScore();break;
                    case SDLK_DOWN:
                        S_move();LoadBackGround();PrintDesk();   PrintScore();PrintBestScore();break;
                    case SDLK_LEFT:
                        A_move();LoadBackGround();PrintDesk();    PrintScore();PrintBestScore();break;
                    case SDLK_RIGHT:
                        D_move();LoadBackGround();PrintDesk();    PrintScore();PrintBestScore();break;
                    case SDLK_SPACE:
                        Suspend(); suspend = true;
                        break;
                    case SDLK_r: Restart();LoadBackGround();    PrintDesk();PrintBestScore();PrintScore();break;
                    case SDLK_t:finish = clock();duration = (double)(finish - start) / CLOCKS_PER_SEC;
                        LoadBackGround();PrintDesk();    PrintScore();PrintBestScore();PrintTime(duration);
                        break;
                    case SDLK_p: kaigua();LoadBackGround();PrintDesk();    PrintScore();PrintBestScore();break;
                    default:break;
                }
                break;
            case SDL_MOUSEBUTTONDOWN:
                //continue
                if (suspend == true && MainEvent.button.x > 167 && MainEvent.button.x < 230 && MainEvent.button.y > 363 && MainEvent.button.y < 422 ) {
                    suspend = false; LoadBackGround();PrintDesk();   PrintScore(); PrintBestScore();}
                //restart
                if (suspend == true && MainEvent.button.x > 275 && MainEvent.button.x < 330 && MainEvent.button.y > 365 && MainEvent.button.y < 420 ) {
                    suspend = false; Restart();LoadBackGround();    PrintDesk();PrintBestScore();PrintScore();}
                //quit
                if (suspend == true && MainEvent.button.x > 381 && MainEvent.button.x < 441 && MainEvent.button.y > 365 && MainEvent.button.y < 420 ) {
                    suspend = false; QUIT();}

                printf("(%d, %d)\n", MainEvent.button.x, MainEvent.button.y);

                break;
            case SDL_MOUSEBUTTONUP:
                if (MainEvent.button.x > 48 && MainEvent.button.x < 547
                        && MainEvent.button.y > 565 && MainEvent.button.y < 749) {
                    PLAY();
                    PrintDesk();
                }
            default :
                break;
        }
    }
    //
    printf("main is over\n");
    //
    QUIT();
}


void LOAD() {
    MainBackGroundSurface = IMG_Load("MainBackGround.jpg");//把图片加载到图片当中
    MainBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, MainBackGroundSurface);//把图片转换成纹理；把纹理绑定到画笔Renderer上，画笔就可以画纹理
    //定义信息：x, y, w, h;
    MainBackGroundRect.x=0;//坐标系x
    MainBackGroundRect.y=0;//坐标系y
    MainBackGroundRect.w=MainBackGroundSurface->w;//宽：本身多宽就多宽
    MainBackGroundRect.h=MainBackGroundSurface->h;//高

    //PlayBackGround
    PlayBackGroundSurface = IMG_Load("PlayBackGround.png");
    PlayBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, PlayBackGroundSurface);

    //字体
    ScoreFont = TTF_OpenFont("COPRGTB.TTF",20);
    BestFont = TTF_OpenFont("COPRGTB.TTF",20);
    ClockFont = TTF_OpenFont("COPRGTB.TTF",25);
}

void PLAY() {
    printf("You are in the Play UI!\n");
    LoadBackGround();
    PrintScore();
}
void LoadBackGround() {
    SDL_RenderClear(Renderer);
    SDL_RenderCopy(Renderer, PlayBackGroundTexture, NULL, NULL);
    SDL_RenderPresent(Renderer);
}

void W_move() {
    memcpy(copy, desk, sizeof(desk));
    //合并
    for (int i = 2; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            if (desk[i][j] != 0) {
                int hang = i;
                int lie = j;
                while (desk[hang - 1][lie] == 0 && hang > 1) {
                    hang = hang - 1;
                }
                if (desk[hang - 1][lie] == desk[i][j]) {
                    desk[hang - 1][lie] = desk[hang - 1][lie] * 2;
                    desk[i][j] = 0;
                    score = score + desk[hang - 1][lie];
                } else {
                    if (hang != i) {
                        desk[hang][lie] = desk[i][j];
                        desk[i][j] = 0;
                    }
                }
            }
        }
    }


    //上移
    for (int i = 2; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            int hang = i;
            while (desk[hang][j] != 0 && desk[hang - 1][j] == 0 && hang > 1) {
                desk[hang - 1][j] = desk[hang][j];
                desk[hang][j] = 0;
                hang = hang - 1;
            }
        }
    }
    Rand();

}
void A_move() {
    memcpy(copy, desk, sizeof(desk));

    //合并
    for (int i = 1; i <= 4; i++) {
        for (int j = 2; j <= 4; j++) {
            if (desk[i][j] != 0) {
                int hang = i;
                int lie = j;
                while (desk[hang][lie - 1] == 0 && lie > 1) {
                    lie = lie - 1;
                }
                if (desk[hang][lie - 1] == desk[i][j]) {
                    desk[hang][lie - 1] = desk[hang][lie - 1] * 2;
                    desk[i][j] = 0;
                    score = score + desk[hang][lie - 1];
                } else {
                    if (lie != j) {
                        desk[hang][lie] = desk[i][j];
                        desk[i][j] = 0;
                    }
                }
            }
        }
    }

    //左移
    for (int i = 1; i <= 4; i++) {
        for (int j = 2; j <= 4; j++) {
            int lie = j;
            while (desk[i][lie] != 0 && desk[i][lie - 1] == 0 && lie > 1) {
                desk[i][lie - 1] = desk[i][lie];
                desk[i][lie] = 0;
                lie = lie - 1;
            }
        }
    }
    Rand();

}
void S_move() {
    memcpy(copy, desk, sizeof(desk));

    //合并
    for (int i = 3; i >= 1; i--) {
        for (int j = 4; j >= 1; j--) {
            if (desk[i][j] != 0) {
                int hang = i;
                int lie = j;
                while (desk[hang + 1][lie] == 0 && hang < 4) {
                    hang = hang + 1;
                }
                if (desk[hang + 1][lie] == desk[i][j]) {
                    desk[hang + 1][lie] = desk[hang + 1][lie] * 2;
                    desk[i][j] = 0;
                    score = score + desk[hang + 1][lie];
                } else {
                    if (hang != i) {
                        desk[hang][lie] = desk[i][j];
                        desk[i][j] = 0;
                    }
                }
            }
        }
    }

    //下移
    for (int i = 3; i >= 1; i--) {
        for (int j = 4; j >= 1; j--) {
            int hang = i;
            while (desk[hang][j] != 0 && desk[hang + 1][j] == 0 && hang < 4) {
                desk[hang + 1][j] = desk[hang][j];
                desk[hang][j] = 0;
                hang = hang + 1;
            }
        }
    }
    Rand();
}
void D_move() {
    memcpy(copy, desk, sizeof(desk));

    //合并
    for (int i = 1; i <= 4; i++) {
        for (int j = 3; j >= 1; j--) {
            if (desk[i][j] != 0) {
                int hang = i;
                int lie = j;
                while (desk[hang][lie + 1] == 0 && lie < 4) {
                    lie = lie + 1;
                }
                if (desk[hang][lie + 1] == desk[i][j]) {
                    desk[hang][lie + 1] = desk[hang][lie + 1] * 2;
                    desk[i][j] = 0;
                    score = score + desk[hang][lie + 1];
                } else {
                    if (lie != j) {
                        desk[hang][lie] = desk[i][j];
                        desk[i][j] = 0;
                    }
                }
            }
        }
    }

    //右移
    for (int i = 4; i >= 1; i--) {
        for (int j = 3; j >= 1; j--) {
            int lie = j;
            while (desk[i][lie] != 0 && desk[i][lie + 1] == 0 && lie < 4) {
                desk[i][lie + 1] = desk[i][lie];
                desk[i][lie] = 0;
                lie = lie + 1;
            }
        }
    }

    Rand();
}

void Rand() {
    //check if changed
    if (OperateTimes != 0) {
        bool change = false;
        for (int i = 1; i <= 4; i++) {
            for (int j = 1; j <= 4; j++) {
                if (desk[i][j] != copy[i][j]) {
                    change = true;
                    break;
                }
            }
        }
        if (!change)return;

    }

    //CheckGameOver:
        //是否还有可以给Rand()生成的空位置：
        int flag = 0;
        for (int i = 1; i <= 4; i++) {
            for (int j = 1; j <= 4; j++) {
                if (desk[i][j] == 0) {
                    flag++;
                }
            }
        }
        if (flag != 0) {//还有空位置：
            //生成随机数：
            int a = 0;
            srand((unsigned int) time (0));//设定种子
            int size;
            if (OperateTimes == 0) {
                size = 2;
            } else {
                size = 1;
            }
            while (size > 0) {
                int p[3];
                for (int i = 0; i < 3; i++) {
                    a = rand();
                    if (i == 2) {
                        p[i] = a % 2;
                        if (p[i] == 0) {
                            p[i] = 2;
                        }
                        if (p[i] == 1) {
                            p[i] = 4;
                        }
                    } else {
                        p[i] = a % 4 + 1;
                    }

                }
                if (desk[ p[0] ][ p[1] ] == 0) {
                    desk[ p[0] ][ p[1] ] = p[2];
                    size--;
                }
            }
        }
    if (OperateTimes != 0) {
        PrintDesk();
    }
    OperateTimes++;
    best = max(best, score);
    //
    printf("Rand is over\n");
    //

}

void PrintDesk() {

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
                switch (i) {
                    case 1:
                    switch (j) {
                        case 1:
                            PrintCell(i, j, 27, 248);
                            break;
                        case 2:
                            PrintCell(i, j, 169, 248);
                            break;
                        case 3:
                            PrintCell(i, j, 306, 248);
                            break;
                        case 4:
                            PrintCell(i, j, 447, 248);
                            break;
                        default:break;

                    }
                    break;
                    case 2:
                        switch (j) {
                            case 1:
                                PrintCell(i, j, 27, 379);
                                break;
                            case 2:
                                PrintCell(i, j, 169, 379);
                                break;
                            case 3:
                                PrintCell(i, j, 307, 379);
                                break;
                            case 4:
                                PrintCell(i, j, 447, 379);
                                break;
                            default:break;

                        }
                        break;
                    case 3:
                        switch (j) {
                            case 1:
                                PrintCell(i, j, 27, 510);
                                break;
                            case 2:
                                PrintCell(i, j, 169, 510);
                                break;
                            case 3:
                                PrintCell(i, j, 307, 510);
                                break;
                            case 4:
                                PrintCell(i, j, 447, 510);
                                break;
                            default:break;
                        }
                        break;
                    case 4:
                        switch (j) {
                            case 1:
                                PrintCell(i, j, 27, 642);
                                break;
                            case 2:
                                PrintCell(i, j, 169, 642);
                                break;
                            case 3:
                                PrintCell(i, j, 307, 642);
                                break;
                            case 4:
                                PrintCell(i, j, 447, 642);
                                break;
                            default:break;
                        }
                        break;
                    default:break;
            }
            SDL_RenderCopy(Renderer, CellTexture, NULL, &CellRect);
            SDL_RenderPresent(Renderer);
        }
    }

    //check if gamer wins:
    for (int i = 1; i <= 4; i++) {
        for(int j = 1; j <= 4; j++) {
            if (desk[i][j] == 2048) {
                printf("Congratulations!\nPress R to restart\n");
                WinSurface = IMG_Load("Win.jpg");
                WinTexture = SDL_CreateTextureFromSurface(Renderer,  WinSurface);
                WinRect.x = 100;
                WinRect.y = 250;
                WinRect.w = WinSurface ->w;
                WinRect.h = WinSurface ->h;
                SDL_RenderCopy(Renderer, WinTexture, NULL, &WinRect);
                SDL_RenderPresent(Renderer);
                break;
            }
        }
    }

    //CheckGameOver:
    int tmp = 0;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            if (desk[i][j] == desk[i - 1][j]
                || desk[i][j] == desk[i][j - 1]
                || desk[i][j] == desk[i][j + 1]
                || desk[i][j] == desk[i + 1][j]) {
                tmp++;
            }
        }
    }
    //是否还有可以给Rand()生成的空位置：
    int flag = 0;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            if (desk[i][j] == 0) {
                flag++;
            }
        }
    }

    //既没有空位置，也不可以合并：结束游戏并退出
    if (flag == 0 && tmp == 0) {
        /**
         * gameover
         */
        printf("GameOver!\nPress R to try again!\n");
        GameOverSurface = IMG_Load("gameover.png");
        GameOverTexture = SDL_CreateTextureFromSurface(Renderer,  GameOverSurface);
        GameOverRect.x = 80;
        GameOverRect.y = 350;
        GameOverRect.w = GameOverSurface ->w;
        GameOverRect.h = GameOverSurface ->h;
        SDL_RenderCopy(Renderer, GameOverTexture, NULL, &GameOverRect);
        SDL_RenderPresent(Renderer);
    }


}

void PrintCell(int i, int j,int x, int y) {
    switch (desk[i][j]) {
        case 0:

            CellSurface = IMG_Load("0.png");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = x;
            CellRect.y = y;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        case 2:

            CellSurface = IMG_Load("2.png");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = x;
            CellRect.y = y;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        case 4:

            CellSurface = IMG_Load("4.png");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = x;
            CellRect.y = y;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        case 8:

            CellSurface = IMG_Load("8.png");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = x;
            CellRect.y = y;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        case 16:

            CellSurface = IMG_Load("16.png");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = x;
            CellRect.y = y;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        case 32:

            CellSurface = IMG_Load("32.png");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = x;
            CellRect.y = y;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        case 64:

            CellSurface = IMG_Load("64.png");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = x;
            CellRect.y = y;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        case 128:

            CellSurface = IMG_Load("128.png");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = x;
            CellRect.y = y;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        case 256:

            CellSurface = IMG_Load("256.png");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = x;
            CellRect.y = y;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        case 512:

            CellSurface = IMG_Load("512.png");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = x;
            CellRect.y = y;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        case 1024:

            CellSurface = IMG_Load("1024.jpg");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = x;
            CellRect.y = y;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        case 2048:

            CellSurface = IMG_Load("2048.png");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = x;
            CellRect.y = y;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        case 4096:

            CellSurface = IMG_Load("4096.png");
            CellTexture = SDL_CreateTextureFromSurface(Renderer,  CellSurface);
            CellRect.x = x;
            CellRect.y = y;
            CellRect.w = CellSurface ->w;
            CellRect.h = CellSurface ->h;
            break;
        default: break;

    }
}

void PrintScore() {
    char a[100];
    sprintf(a, "%d", score);

    ScoreSurface = TTF_RenderUTF8_Blended(ScoreFont, a, FontColor);
    ScoreTexture = SDL_CreateTextureFromSurface(Renderer, ScoreSurface);
    ScoreRect.x = 440;
    ScoreRect.y = 36;
    ScoreRect.w = ScoreSurface->w;
    ScoreRect.h = ScoreSurface->h;
    SDL_RenderCopy(Renderer, ScoreTexture, NULL, &ScoreRect);
    SDL_RenderPresent(Renderer);

}
void PrintBestScore () {
    char a[100];
    sprintf(a, "%d", best);

    BestSurface = TTF_RenderUTF8_Blended(BestFont, a, FontColor);
    BestTexture = SDL_CreateTextureFromSurface(Renderer, BestSurface);
    BestRect.x = 530;
    BestRect.y = 36;
    BestRect.w = BestSurface ->w;
    BestRect.h = BestSurface ->h;
    SDL_RenderCopy(Renderer, BestTexture, NULL, &BestRect);
    SDL_RenderPresent(Renderer);
}
void PrintTime(double duration) {
    char a[100];
    sprintf(a, "%.1f", duration);
    ClockSurface = TTF_RenderUTF8_Blended(ClockFont, a, ClockColor);
    ClockTexture = SDL_CreateTextureFromSurface(Renderer, ClockSurface);
    ClockRect.x = 300;
    ClockRect.y = 50;
    ClockRect.w = ClockSurface->w;
    ClockRect.h = ClockSurface->h;
    SDL_RenderCopy(Renderer, ClockTexture, NULL, &ClockRect);
    SDL_RenderPresent(Renderer);
}


void Restart() {
    printf ("\n\nThis is a New Game!\n");
    SDL_RenderClear(Renderer);
    SDL_RenderCopy(Renderer, PlayBackGroundTexture, NULL, NULL);
    SDL_RenderPresent(Renderer);
    score = 0;
    for (int i = 0; i <= 5; i++) {
        for (int j = 0; j <= 5; j++) {
            desk[i][j] = 0;
        }
    }
    OperateTimes = 0;
    Rand();
}
void Suspend() {
    SuspendSurface = IMG_Load("Suspend.png");
    SuspendTexture = SDL_CreateTextureFromSurface(Renderer,  SuspendSurface);
    SuspendRect.x = 50;
    SuspendRect.y = 250;
    SuspendRect.w = SuspendSurface ->w;
    SuspendRect.h = SuspendSurface ->h;
    printf("The Game is suspended!Click the button to go on!\n");
    SDL_RenderCopy(Renderer, SuspendTexture, NULL, &SuspendRect);
    SDL_RenderPresent(Renderer);
}

void QUIT() {
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

    SDL_DestroyRenderer(Renderer);
    SDL_DestroyWindow(Window);
    SDL_Quit();

    //
    printf("Quit is over\n");
    //
}
void kaigua() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            desk[i][j] = 1024;
        }
    }

    //
    printf("how dare you!\n");
    //
}