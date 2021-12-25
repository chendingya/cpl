//
// Created by 15845 on 2021/11/28.
//
#include <stdio.h>
void pour (int k,int a,int b,int c);
int VA,VB,VC;
int a,b,c;
int a0,b0,c0;
int count;

int main () {
    int k = 0;

    scanf("%d", &k);
    scanf("%d%d%d", &VA, &VB, &VC);
    scanf("%d%d%d", &a, &b, &c);
    scanf("%d%d%d", &a0, &b0, &c0);

    pour(k, a, b, c);
    if (count != 0) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
void pour (int k,int a,int b,int c) {
    if (k != 0) {

        if ( b + a <= VB) {

            pour(k - 1, 0, b + a, c);
        }
        if ( b + a > VB) {

            pour(k - 1, 0, VB, c);
        }
        if ( a + b <= VA) {

            pour(k - 1, a + b, 0, c);
        }
        if ( a + b > VA) {

            pour(k - 1, VA, 0, c);
        }
        if ( c + a <= VC) {

            pour(k - 1, 0, b, c + a);
        }
        if ( c + a > VC) {

            pour(k - 1, 0, b, VC);
        }
        if ( a + c <= VA) {

            pour(k - 1, a + c, b, 0);
        }
        if ( a + c > VA) {

            pour(k - 1, VA, b, 0);
        }
        if ( c + b <= VC) {

            pour(k - 1, a, 0, c + b);
        }
        if (c + b > VC) {

            pour(k - 1, a, 0, VC);
        }
        if ( b + c <= VB) {

            pour(k - 1, a, b + c, 0);
        }
        if ( b + c > VB) {

            pour(k - 1, a, VB, 0);
        }
    } else {
        if (a == a0 && b== b0 && c == c0 && k >= 0) {
            count++;
        }

    }



}
