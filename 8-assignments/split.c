//
// Created by 15845 on 2021/12/9.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
    char inter;
    char *a = malloc(15000 * sizeof (*a));
    char **b = malloc(100 * sizeof (*b));
    scanf("%s", a);
    scanf("\n");
    scanf("%c", &inter);
    int alen = strlen(a);
    /**
     * chaifen
     */
    int i = 0;
    int j = 0;
    *b = a;
    while (*(a + i) != '\0') {
        if (*(a + i) == inter) {
            *(b + j + 1) = a + i + 1;
            j++;
        }
        i++;
    }
    //
    int cc = 0;

    /**
     * 
     */
    for (int k = 0; k < j + 1; k++) {
        for (int l = 0; l < j - k; l++) {
            if (strcmp( *(b + l), *(b + l + 1) ) > 0) {

                char *tmp;
                tmp = *(b + l);
                *(b + l) = *(b + l + 1);

                *(b + l + 1) = tmp;

            }
        }
    }

    for (int k = 0; k < j + 1; k++) {
        while (*(*(b + k) + cc) != inter && *(*(b + k) +cc) != '\0') {
            printf("%c", *(*(b + k) + cc));
            cc++;
        }
        cc = 0;
        if (k != j) {
            printf("\n");
        }
    }

    free(a);
    free(b);


    return 0;
}
