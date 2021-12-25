//
// Created by 15845 on 2021/12/19.
//
#include <stdio.h>
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"

void QUIT();
void LOAD();
void PRINTSCORE();

SDL_Window *Window = NULL;
SDL_Renderer *Renderer = NULL;

SDL_Surface *MainBackGroundSurface = NULL;
SDL_Texture *MainBackGroundTexture = NULL;
SDL_Rect MainBackGroundRect;

TTF_Font *ScoreFont = NULL;
SDL_Surface *ScoreSurface = NULL;
SDL_Texture *ScoreTexture = NULL;
SDL_Rect ScoreRect;
SDL_Color FontColor = {255,255,255,255};

int SDL_main (int argc, char *argv[]) {
    SDL_Init(SDL_INIT_VIDEO);
    Window = SDL_CreateWindow("2048 which you can never achieve", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,600,800,SDL_WINDOW_SHOWN);
    Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED);
    SDL_Event MainEvent;
    LOAD();


    SDL_RenderClear(Renderer);
    SDL_RenderCopy(Renderer, MainBackGroundTexture,NULL,&MainBackGroundRect);
    SDL_RenderPresent(Renderer);

    while (SDL_WaitEvent(&MainEvent) ) {
        switch (MainEvent.type) {
            case SDL_QUIT:
                QUIT();
                break;
            case SDL_KEYDOWN:
                switch (MainEvent.key.keysym.sym) {
                    case SDLK_RETURN:
                        // 回车键

                        break;
                    case SDLK_ESCAPE:
                        QUIT();
                        break;
                    case SDLK_h:
                        PRINTSCORE();
                        break;
                    case SDLK_a:
                        // a

                        break;
                    case SDLK_d:
                        // d

                        break;
                    case SDLK_w:
                        // w

                        break;
                    case SDLK_s:
                        // s

                        break;

                    default:
                        break;
                }
                break;
            case SDL_MOUSEBUTTONDOWN:
                printf("(%d,%d)\n", MainEvent.button.x, MainEvent.button.y);
                break;
            case SDL_MOUSEBUTTONUP:
                printf("(%d,%d)\n", MainEvent.button.x, MainEvent.button.y);
                break;
            case SDL_MOUSEMOTION:
                break;
            default :
                break;

        }
    }

    QUIT();
}


void LOAD() {
    MainBackGroundSurface = IMG_Load("MainBackGround.png");
    MainBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, MainBackGroundSurface);
    MainBackGroundRect.x=0;
    MainBackGroundRect.y=0;
    MainBackGroundRect.w=MainBackGroundSurface->w;
    MainBackGroundRect.h=MainBackGroundSurface->h;

    ScoreFont = TTF_OpenFont("IMAGE/COPRGTB.TTF",50);

}
void PRINTSCORE() {
    ScoreSurface = TTF_RenderUTF8_Blended(ScoreFont, "114514", FontColor);
    ScoreTexture = SDL_CreateTextureFromSurface(Renderer, ScoreSurface);
    
}

void QUIT() {
    SDL_DestroyRenderer(Renderer);
    SDL_DestroyWindow(Window);
    SDL_Quit();
}