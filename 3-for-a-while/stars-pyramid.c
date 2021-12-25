//
// Created by 15845 on 2021/10/25.
//
#include <stdio.h>
int main(){
    int rows;
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++){
        for(int a = 1; a <= rows - i; a++){
                printf(" ");
        }

        for(int a = 1; a <= 2 * i - 1; a++){
            printf("*");
        }

        for(int a = 1; a <= rows - i; a++){
            printf(" ");
        }
        if(i != rows){
            printf("\n");
        }

    }

    return 0;
}
