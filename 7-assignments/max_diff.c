//
// Created by 15845 on 2021/11/26.
//
#include <stdio.h>
int a[101];
int max;
int max1, max11;
int max2, max22;
int min;
int n;
char ch;
int main(){
    max = 1;
    n = 1;
    while(scanf("%d",&a[n]) != EOF) {
        if (a[n] > a[max]) {
            max = n;
        }
        n++;
    }

    max1 = a[1];
    for (int i = 1; i < max; i++) {
        for (int j = 1; j <= i; j++) {
            if (a[i] > max11) {
                max11 = a[i];
            }
        }
        if (max11 < max1) {
            max1 = max11;

        }
    }

    max2 = a[n - 1];
    for (int i = n - 1; i > max; i--) {
        for (int j = n - 1; j >= i; j--) {
            if (a[i] > max22) {
                max22 = a[i];
            }
        }

        if (max22 < max2) {
            max2 = max22;
        }
    }
    if (max1 < max2) {
        min = max1;
    } else {
        min = max2;
    }
    printf("%d", a[max] - min);

    return 0;
}
