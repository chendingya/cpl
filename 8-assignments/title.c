//
// Created by 15845 on 2021/12/6.
//
#include <stdio.h>
#include <stdlib.h>
int main(){
    char *p = malloc(10000 * sizeof(*p));
    int i = 0;
    gets(p);
    while(*(p + i) != '\0') {
            i++;
    }

    if ( *p >= 97 && *p <= 122) {
        *p = *p - 32;

    }
    for (int j = 1; j < i; j++) {
        if (*(p + j - 1) == ' ' && *(p + j) >= 97 && *(p + j) <= 122) {
            *(p + j) -= 32;

        } else {
            if (*(p + j - 1) != ' ' && *(p + j) >= 65 && *(p + j) <= 90) {
                *(p + j) += 32;
            }
        }
    }

    for (int j = 0; j < i; j++) {
        printf("%c", *(p + j));
    }
    free(p);
    return 0;
}
