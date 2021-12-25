//
// Created by 15845 on 2021/12/7.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mystrcat(char*a, char*b, int alen, int blen);
int main(){
    int t = 0;
    int alen;
    int blen;
    scanf("%d", &t);
    char *a = malloc(1001 * sizeof (*a));
    char *b = malloc(1001 * sizeof (*b));
    for (int i = 0; i < t; i++) {
        scanf("%s", a);
        scanf("%s", b);
        alen = strlen(a);
        blen = strlen(b);
        mystrcat(a, b, alen, blen);

    }
    free(a);
    free(b);

    return 0;
}
void mystrcat(char*a, char*b, int alen, int blen) {
    int max_len = 0;
    int count = 0;
    int a_flag = 0;
    for (int i = 0; i < alen; i++) {
        if (*(a + i) == *b) {
            count = 0;
            for (int j = i; j < blen; j++) {
                if (j < alen) {
                    if ( *(a + j) != *(b + j - i) ) {
                        count = count + 1;
                    }
                }
            }
            if (count == 0) {
                a_flag = i;
                break;
            }
        }
    }

    max_len = alen - a_flag;
    for (int i = 0; i < alen - max_len; i++) {
        printf("%c", *(a + i));
    }
    for (int i = 0; i < blen; i++) {
        printf("%c", *(b + i));
    }
    printf("\n");

}