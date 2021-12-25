//
// Created by 15845 on 2021/12/3.
//
#include <stdio.h>
#include <string.h>
#include <math.h>
char a[130];
int b[130];
int c[35];
int d[10];
int main(){
    scanf("%s", a);
    for (int i = 127; i >= 0; i--) {
        b[i] = a[i] - 48;
    }
    int count = 0;
    for (int i = 0; i < 32; i++) {
        c[i] = b[count] * 8 + b[count + 1] * 4 + b[count + 2] * 2 + b[count + 3];
        count = count + 4;
    }
    count = 0;
    for (int i = 0; i < 8; i++) {
        d[i] = c[count] * 256 * 16 + c[count + 1] * 256 + c[count + 2] * 16 + c[count + 3];
        count = count + 4;
    }
    count = 0;


    /**
     * find the most 0
     */
     int flag = 0;
     int max_flag = 0;
     int xiabiao = 0;
     int len = 0;
    for (int i = 0; i < 8; i++) {
        if (d[i] == 0) {
            for (int j = i; j < 8; j++) {
                if (d[j] == 0) {
                    flag++;
                } else {
                    break;
                }
            }
            if (flag > max_flag) {
                max_flag = flag;
                xiabiao = i;
            }
            flag = 0;
        }
    }


    /**
     * print
     */
     int n = 0;
    while (n <= 7) {
        if (xiabiao != 0) {
            if (n != xiabiao && n != 7) {
                printf("%x:", d[n]);
                n++;
            } else {
                if (n == xiabiao) {
                    printf(":");
                    n = n + max_flag;
                } else {
                    printf("%x",d[n]);
                    n++;
                }
            }
        } else {
            if (n != 7) {
                printf("%x:", d[n]);
                n++;
            } else {
                printf("%x", d[n]);
                n++;
            }

        }

    }

    return 0;
}

