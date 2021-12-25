//
// Created by 15845 on 2021/11/29.
//
#include <stdio.h>
int a1,a2,a3,a4;
int b1,b2,b3,b4;
int c1,c2,c3,c4;
int main () {
    scanf("%d.%d.%d.%d", &a1, &a2, &a3, &a4);
    scanf("%d.%d.%d.%d", &b1, &b2, &b3, &b4);
    scanf("%d.%d.%d.%d", &c1, &c2, &c3, &c4);

    if ( ((a1 & b1) == (c1 & b1))
    && ((a2 & b2) == (c2 & b2))
    && ((a3 & b3) == (c3 & b3)) ) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}
