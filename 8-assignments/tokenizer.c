//
// Created by 15845 on 2021/12/9.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void process(char *need, int i, int *a, int lens);
int main () {
    char *s = malloc(5000 * sizeof (*s));
    int *a = malloc(5000 * sizeof (*a));
    for (int i = 0; i < 5000; i++) {
        *(a + i) = 0;
    }
    int i = -1;
    int stringlen = 0;
    while (scanf("%s", s) != EOF) {
        stringlen = strlen(s);
        char *position = strchr(s, ';');   // if there's no ';' in s, it returns NULL.
        if (position == NULL) {
            i++;
            process(s, i, a, stringlen);
        }
        else {
            if (position == s && stringlen == 1) {
                i++;
                *(a + i) = 7;
            }
            if ( stringlen != 1) {
                if (position == s ) {
                    i++;
                    *(a + i) = 7;
                    i++;
                    process(s + 1, i, a, stringlen - 1);
                }
                if (position == s + stringlen - 1) {
                    i++;
                    char *chr = malloc(500 * sizeof (*chr));
                    strncpy(chr,s,stringlen - 1);
                    process(chr, i, a, stringlen - 1);
                    memset(chr,-100, 500);
                    i++;
                    *(a + i) = 7;
                }
                if (position != s && position != s + stringlen - 1) {
                    i++;
                    char *chr2 = malloc(500 * sizeof (*chr2));
                    strncpy(chr2, s, position - s);
                    process(chr2, i, a, position - s);
                    i++;
                    *(a + i) = 7;
                    i++;
                    process(position + 1, i, a, stringlen - (position - s) - 1);
                    memset(chr2,-100, 500);
                }
            }
        }
        memset(s,-100, stringlen);
    }
    /**
     * print
     */
    int plgg = 0;
    for (int j = 0; j < i + 1; j++) {
        if (*(a + j) == 6) {
            plgg++;
        }
    }
    if (plgg != 0) {
        printf("Compile Error");
    }
    if (plgg == 0) {
        for (int j = 0; j < i + 1; j++) {
            if (*(a + j) == 1) {
                printf("reserved ");
            }
            if (*(a + j) == 2) {
                printf("integer ");
            }
            if (*(a + j) == 3) {
                printf("float ");
            }
            if (*(a + j) == 4) {
                printf("operator ");
            }
            if (*(a + j) == 5) {
                printf("variable ");
            }
            if (*(a + j) == 7) {
                printf("\n");
            }
        }
    }
    /**
     * free
     */
    free(a);
    free(s);
    return 0;
}
void process(char *need, int i, int *a, int lens) {
    if (strcmp(need, "const") == 0)
        *(a + i) = 1;
    if (strcmp(need, "int") == 0)
        *(a + i) = 1;
    if (strcmp(need, "float") == 0)
        *(a + i) = 1;
    if (strcmp(need, "double") == 0)
        *(a + i) = 1;
    if (strcmp(need, "long") == 0)
        *(a + i) = 1;
    if (strcmp(need, "static") == 0)
        *(a + i) = 1;
    if (strcmp(need, "void") == 0)
        *(a + i) = 1;
    if (strcmp(need, "char") == 0)
        *(a + i) = 1;
    if (strcmp(need, "extern") == 0)
        *(a + i) = 1;
    if (strcmp(need, "return") == 0)
        *(a + i) = 1;
    if (strcmp(need, "break") == 0)
        *(a + i) = 1;
    if (strcmp(need, "enum") == 0)
        *(a + i) = 1;
    if (strcmp(need, "struct") == 0)
        *(a + i) = 1;
    if (strcmp(need, "typedef") == 0)
        *(a + i) = 1;
    if (strcmp(need, "union") == 0)
        *(a + i) = 1;
    if (strcmp(need, "goto") == 0)
        *(a + i) = 1;
    //
    if (strcmp(need, "+") == 0)
        *(a + i) = 4;
    if (strcmp(need, "-") == 0)
        *(a + i) = 4;
    if (strcmp(need, "*") == 0)
        *(a + i) = 4;
    if (strcmp(need, "/") == 0)
        *(a + i) = 4;
    if (strcmp(need, "=") == 0)
        *(a + i) = 4;
    if (strcmp(need, "==") == 0)
        *(a + i) = 4;
    if (strcmp(need, "!=") == 0)
        *(a + i) = 4;
    if (strcmp(need, ">=") == 0)
        *(a + i) = 4;
    if (strcmp(need, "<=") == 0)
        *(a + i) = 4;
    if (strcmp(need, ">") == 0)
        *(a + i) = 4;
    if (strcmp(need, "<") == 0)
        *(a + i) = 4;
    int len = strlen(need);
    if (*(a + i) == 0 && ((int)(*need) >= 48 && (int)(*need) <= 57) ) {
        int count = 0;
        for (int j = 0; j < lens; j++) {
            if (*(need + j) == '.')
                count++;
            if ((int)(*(need + j)) >= 97 && (int)(*(need + j)) <= 122)
                count += 2;
        }

        //
        if (count > 1)
            *(a + i) = 6;
        if (count == 1)
            *(a + i) = 3;
        if (count == 0)
            *(a + i) = 2;

    } else {
        if (*(a + i) == 0) {
            //
            int flag = 0;
            if ( ((int)(*need) >= 97 && (int)(*need) <= 122) || ( (int)(*need) == 95) ) {
                for (int j = 1; j < len; j++) {
                    if ( ((int)(*need) >= 97 && (int)(*need) <= 122) || ( (int)(*need) == 95) ||( (int)(*need) >= 48 && (int)(*need) <= 57)) {

                    } else {
                        flag = 1;
                    }
                }
            } else {
                flag = 1;
            }
            if (flag != 0)
            {
                *(a + i) = 6;
            } else
            {
                *(a + i) = 5;
            }
        }
    }
}
