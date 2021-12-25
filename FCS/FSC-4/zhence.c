//
// Created by 15845 on 2021/12/15.
//
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void zhenze(char *a, char *b, int alen, int blen);
int result;
int main () {
    char *a = malloc(10000 * sizeof (*a));
    char *b = malloc(10000 * sizeof (*b));
    scanf("%s", a);
    scanf("%s", b);
    int alen = strlen(a);
    int blen = strlen(b);
    zhenze(a, b, alen, blen);
    printf("%d", result);
    free(a);
    free(b);
    return 0;
}
void zhenze(char *a, char *b, int alen, int blen) {
    if (alen == 0 && blen == 0) {
        result = 1;
    }

    if (alen != 0 && blen != 0) {

        //    aa  not  a*
        if ( *b != '\\'  && *(b + 1) != '*' ) {

            if ( *b != '.') {
                // aa not .a
                if (*b != *a) {

                } else {
                    zhenze(a + 1, b + 1, alen - 1, blen - 1);
                }
            }
            if (*b == '.') {
                // .a
                zhenze(a + 1, b + 1, alen - 1, blen - 1);
            }
        }
        //  \ x a
        if ( *b == '\\' && *(b + 2) != '*' ) {

            if ( *(b + 1) == *a) {
                zhenze(a + 1, b + 2, alen - 1, blen - 2);
            }
        }
        // \ x *
        if (*b == '\\' && *(b + 2) == '*') {

            zhenze(a,b + 3, alen, blen - 2);
            if (*a == *(b + 1)) {
                zhenze(a + 1, b + 3, alen - 1, blen - 3);
            }
        }
        //  x*
        if ( *b != '\\' && *(b + 1) == '*' ) {

            if (*b == '.') {
                zhenze(a, b + 2, alen, blen - 2);
                zhenze(a + 1, b, alen - 1, blen);
                zhenze(a + 1, b + 2, alen - 1, blen - 2);
            }
            if (*b != '.') {
                zhenze(a, b + 2,alen, blen - 2);
                if (*b == *a) {
                    zhenze(a + 1, b, alen - 1, blen);
                    zhenze(a + 1, b + 2, alen - 1, blen - 2);
                }
             }
        }
    }

}
