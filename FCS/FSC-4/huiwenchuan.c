//
// Created by 15845 on 2021/12/13.
//
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main () {
    char *s = malloc(105 * sizeof (*s));
    int i = 0;
    gets(s);
    i = strlen(s);


    /**
     * judge
     */
     //i is oushu
     int flag = 0;
     if (i % 2 == 0) {
         for (int j = 0; j < i / 2; j++) {
            if (*(s + j) != *(s + i - j - 1)) {
                flag++;
            }
         }

         if (flag != 0) {
             for (int j = 0; j < i; j++) {
                 printf("%c", *(s + j));
             }
         } else {// flag == 0
             for (int j = 0; j < i / 2; j++) {
                 printf("%c", *(s + j));
             }
         }
     }
     flag = 0;
    //i is jishu
    if (i % 2 == 1) {
        for (int j = 0; j < i / 2; j++) {
            if (*(s + j) != *(s + i - j - 1)) {
                flag++;
            }
        }
        if (flag != 0) {
            for (int j = 0; j < i; j++) {
                printf("%c", *(s + j));
            }
        } else {// flag == 0
            for (int j = 0; j < i / 2 + 1; j++) {
                printf("%c", *(s + j));
            }
        }
    }

    return 0;
}
