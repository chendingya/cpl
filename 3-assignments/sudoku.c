//
// Created by 15845 on 2021/11/7.
//
#include <stdio.h>
int main(){
    int a[9][9] = {0};
    int b[9] = {0};
    int tmp = 0;
//input
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            scanf("%d", &a[i][j]);
        }
    }
//line
    for(int i = 0; i < 9; i++){
        for(int i = 0; i < 9; i++){
            b[i] = 0;
        }

        for(int j = 0; j < 9; j++){
            if(a[i][j] <= 9){
                b[a[i][j] - 1]++;
            }
        }
        for(int k = 0; k < 9; k++){
            if(b[k] != 1){
                tmp++;
            }
        }
    }

    //jiu gong ge
    for(int i = 0; i < 9; i++){
        b[i] = 0;
    }
    for(int i = 0;i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(a[i][j] <= 9){
                b[a[i][j] - 1]++;
            }
        }
    }
    for(int k = 0; k < 9; k++){
        if(b[k] != 1){
            tmp++;
        }
    }


    //
    for(int i = 0; i < 9; i++){
        b[i] = 0;
    }
    for(int i = 0;i < 3; i++){
        for(int j = 3; j < 6; j++){
            if(a[i][j] <= 9){
                b[a[i][j] - 1]++;
            }
        }
    }
    for(int k = 0; k < 9; k++){
        if(b[k] != 1){
            tmp++;
        }
    }

    //
    for(int i = 0; i < 9; i++){
        b[i] = 0;
    }
    for(int i = 0;i < 3; i++){
        for(int j = 6; j < 9; j++){
            if(a[i][j] <= 9){
                b[a[i][j] - 1]++;
            }
        }
    }
    for(int k = 0; k < 9; k++){
        if(b[k] != 1){
            tmp++;
        }
    }

//
    for(int i = 0; i < 9; i++){
        b[i] = 0;
    }
    for(int i = 3;i < 6; i++){
        for(int j = 0; j < 3; j++){
            if(a[i][j] <= 9){
                b[a[i][j] - 1]++;
            }
        }
    }
    for(int k = 0; k < 9; k++){
        if(b[k] != 1){
            tmp++;
        }
    }

//

    for(int i = 0; i < 9; i++){
        b[i] = 0;
    }
    for(int i = 3;i < 6; i++){
        for(int j = 3; j < 6; j++){
            if(a[i][j] <= 9){
                b[a[i][j] - 1]++;
            }
        }
    }
    for(int k = 0; k < 9; k++){
        if(b[k] != 1){
            tmp++;
        }
    }

    //
    for(int i = 0; i < 9; i++){
        b[i] = 0;
    }
    for(int i = 3;i < 6; i++){
        for(int j = 6; j < 9; j++){
            if(a[i][j] <= 9){
                b[a[i][j] - 1]++;
            }
        }
    }
    for(int k = 0; k < 9; k++){
        if(b[k] != 1){
            tmp++;
        }
    }

    //

    for(int i = 0; i < 9; i++){
        b[i] = 0;
    }
    for(int i = 6;i < 9; i++){
        for(int j = 0; j < 3; j++){
            if(a[i][j] <= 9){
                b[a[i][j] - 1]++;
            }
        }
    }
    for(int k = 0; k < 9; k++){
        if(b[k] != 1){
            tmp++;
        }
    }

    //
    for(int i = 0; i < 9; i++){
        b[i] = 0;
    }
    for(int i = 6;i < 9; i++){
        for(int j = 3; j < 6; j++){
            if(a[i][j] <= 9){
                b[a[i][j] - 1]++;
            }
        }
    }
    for(int k = 0; k < 9; k++){
        if(b[k] != 1){
            tmp++;
        }
    }

    //

    for(int i = 0; i < 9; i++){
        b[i] = 0;
    }
    for(int i = 6;i < 9; i++){
        for(int j = 6; j < 9; j++){
            if(a[i][j] <= 9){
                b[a[i][j] - 1]++;
            }
        }
    }
    for(int k = 0; k < 9; k++){
        if(b[k] != 1){
            tmp++;
        }
    }

    //

    if(tmp != 0){
        printf("NO");
    }else{
        printf("YES");
    }

    return 0;
}
