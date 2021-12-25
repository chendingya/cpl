//
// Created by 15845 on 2021/12/13.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
char d[10000];
void zuhe(char *a, int lens, int i,char *b, char *c);
int main () {
    char *a = malloc(8 * sizeof (*a));
    scanf("%s", a);
    int lens = strlen(a);
    char *b = malloc((lens + 3) * sizeof (*b));
    zuhe(a, lens, 3, b, b);
    int lend = strlen(d);
    for (int i = 0; i < lend; i++) {
        printf("%c", d[i]);
    }
    free(a);
    free(b);
    return 0;
}
void zuhe(char *a, int lens, int i, char *b, char *c) {
    //store
    if (i == 0) {
        for (int j = 0; j < lens; j++) {
            *(b + j) = *(a + j);
        }
        int lenc = b - c;

        int lend = strlen(d);
        if (lend != 0) {
            d[lend] = ',';
            for (int k = 0; k < lenc + lens; k++) {
                d[lend + k + 1] = *(c + k);
            }
        } else {
            for (int k = 0; k < lenc + lens; k++) {
                d[lend + k] = *(c + k);
            }
        }
    }
    if (i != 0 && lens != 0) {

        for (int j = 0; j < lens; j++) {

            for (int k = 0; k <= j; k++) {
                *(b + k) = *(a + k);
            }
            *(b + j + 1) = '.';
            int flag = 0;
            int count = 0;
            int count2 = 0;

            if ((*b) == '0' && *(b + 1) != '.') {
                flag = 1;
            }
            if (i == 1 && (lens - j - 1) != 1) {
                if (*(b - 1) == '.' && *(b) == '0' && *(b + 1) == '0') {
                    flag = 1;
                }
                int gun = 0;

                for (int k = 0; k < lens - j - 1; k++) {
                    count2 = count2 + (int)(*(a + j + 1 + k) - 48) * pow(10,lens - j - 2 - k);
                    if (*(a + j + 1 + k) != '0') {
                        gun = 1;
                    }
                }
                if (gun != 1) {//wu '0'
                    flag = 1;
                }
                gun = 0;
            }

            for (int k = 0; k <= j; k++) {

                count = count + ((int)(*(b + k)) - 48) * pow(10, j - k);
            }

                int plgg = 0;
            if ( flag == 1 || count > 255 || ( (lens - j - 1) == 0 && (i - 1) != 0) || count2 > 255) {

                for (int l = 0; l <= j; l++) {
                    *(b + l) = 0;
                }
                *(b + j + 1) = 0;
                plgg = 1;

            }
            count = 0;
            if (plgg == 0) {
                zuhe(a + j + 1, lens - j - 1, i - 1, b + j + 2, c);
            }
        }
    }
}