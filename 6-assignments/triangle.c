//
// Created by 15845 on 2021/11/23.
//
#include <stdio.h>
#include <math.h>
int n;
int num[513][513] = {0};

int main(){
    //chu shi hua
    scanf("%d", &n);
    for (int i = 1; i < 513; i++) {
        num[i][1] = 1;
        num[i][i] = 1;
    }

    if (n >= 3) {
        for (int i = 3; i <= pow(2,n - 1); i++) {
            for (int j = 2; j < i; j++) {
                num[i][j] = (num[i - 1][j - 1] + num[i - 1][j]) % 2;
            }

        }
    }


    /**
     * print
     */
    int line = pow(2,n - 1);
    for (int i = 1; i <= line ; i++) {
        for (int j = 1; j <= ((2 * line) - 2 * i) ; j++) {
                printf(" ");
                //
        }
        for (int j = 1; j <= i; j++) {
            if (num[i][j] == 1) {
                printf(" /\\ ");
            } else {
                printf("    ");
            }
        }
        printf("\n");
        for (int j = 1; j <= ((2 * line) - 2 * i) ; j++) {
                printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            if (num[i][j] == 1) {
                printf("/__\\");
            } else {
                printf("    ");
            }
        }
        printf("\n");
    }


    return 0;
}
