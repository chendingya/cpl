//
// Created by 15845 on 2021/11/18.
//
#include <stdio.h>
#include <string.h>
int flag = 1;
int tmp = 0;
int len;
char a[51];
int b[50];
int MIN = 0;
int main(){
    int n = 0;
    scanf("%d", &n);
    scanf("\n");

    for (int i = 0; i < n; i++) {
        /**
         * input
         */
        for (int j = 0; j < 50; j++) {
            a[j] = 0;
        }
        scanf("%s",a);

        len = 0;
        for (int j = 0; j < 51; j++) {
            if (a[j] != 0) {
                len++;
            }
        }


        for (int j = 0; j < 50; j++) {
            b[j] = 0;
        }


        for (int j = 0; j < len; j++) {
            b[j] = (int) a[j];
        }



        /**
         * find the min
        */
         MIN = b[0];
         for (int j = 0; j < len; j++) {
            if (b[j] < MIN) {
                MIN = b[j];
            }
        }



        for (int j = 1; j < len; j++) {
            for (int k = 0; k < len; k++) {
                if (b[k] == MIN + 1) {
                    flag = 1;
                    MIN++;
                    break;
                } else {
                    flag = 0;
                }
            }
        }

        if (flag == 0) {
            printf("No");
        }
        if (flag == 1) {
            printf("Yes");
        }
        if (i != (n - 1)) {
            printf("\n");
        }
        flag = 1;
    }
    return 0;
}
