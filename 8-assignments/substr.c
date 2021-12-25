//
// Created by 15845 on 2021/12/7.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int flag = 0;
int main(){
    char *a = malloc(100001 * sizeof (*a));
    char *b = malloc(100001 * sizeof (*b));
    scanf("%s", a);
    scanf("%s", b);
    int alen = strlen(a);
    int blen = strlen(b);


    for (int i = 0; i < alen; i++) {
        if (*(a + i) == *b) {
            flag = 0;
            for (int j = 0; j < blen; j++) {
                if (*(a + i + j) != *(b + j)) {
                    flag++;
                }
            }
            if (flag == 0) {
                printf("%d ", i);
            }
        }

    }
    free(a);
    free(b);

    return 0;
}
