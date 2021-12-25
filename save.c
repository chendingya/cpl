//
// Created by 15845 on 2021/12/13.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
char d[10000];
void zuhe(char *a, int lens, char *b);
int main () {
    char *a = malloc(8 * sizeof (*a));
    scanf("%s", a);
    int lens = strlen(a);
    char *b = malloc((lens + 3) * sizeof (*b));
    zuhe(a, lens, b);
    int lend = strlen(d);
    for (int i = 0; i < lend; i++) {
        printf("%c", d[i]);
    }
    return 0;
}
void zuhe(char *a, int lens, char *b) {
    for (int j = 0; j < lens - 3; j++) {
        for (int k = 0; k <= j; k++) {
            *(b + k) = *(a + k);
        }
        *(b + j + 1) = '.';
        for (int k = j + 1; k < lens - 2; k++) {
            for (int l = j + 1; l <= k; l++) {
                *(b + l + 1) = *(a + l);
            }
            *(b + )
            for (int l = k + 1; l < lens - 1; l++) {

            }
        }
    }
}
