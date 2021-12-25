//
// Created by 15845 on 2021/11/7.
//
#include <stdio.h>
int main(){
    int n = 0;
    scanf("%d", &n);
    scanf("\n");
    int a[n + 2][n + 2];
    char b[n + 2][n + 2];
    char c[n + 2][n + 2];

    //chu shi hua
    for(int i = 0; i < n + 2; i++){
        for(int j = 0; j < n + 2; j++){
            a[i][j] = 0;
        }
    }

    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < n + 1; j++){
            b[i][j] = '0';
        }
    }
//input
    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < n + 1; j++){
            scanf("%c", &c[i][j]);
        }
        if (i != n){
            scanf("\n");
        } else{
            break;
        }
    }

    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < n + 1; j++){
            if(c[i][j] == 'o'){
                a[i][j] = 0;
            }
            if(c[i][j] == '*'){
                a[i][j] = 1;
            }
        }
    }

    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < n + 1; j++){
            if(a[i][j] == 1){
                b[i][j] = '*';
            }
            if(a[i][j] != 1 && a[i-1][j-1] == 1){
                b[i][j]++;
            }
            if(a[i][j] != 1 && a[i-1][j] == 1){
                b[i][j]++;
            }
            if(a[i][j] != 1 && a[i-1][j+1] == 1){
                b[i][j]++;
            }
            if(a[i][j] != 1 && a[i][j-1] == 1){
                b[i][j]++;
            }
            if(a[i][j] != 1 && a[i][j+1] == 1){
                b[i][j]++;
            }
            if(a[i][j] != 1 && a[i+1][j-1] == 1){
                b[i][j]++;
            }
            if(a[i][j] != 1 && a[i+1][j] == 1){
                b[i][j]++;
            }
            if(a[i][j] != 1 && a[i+1][j+1] == 1){
                b[i][j]++;
            }
        }
    }

    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < n + 1; j++){
            printf("%c",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
