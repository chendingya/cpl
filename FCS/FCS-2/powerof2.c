//
// Created by 15845 on 2021/11/18.
//
#include <stdio.h>

int a[40001] = {0};
int n;
int tmp = 0;
int max = 0;
int main(){
    scanf("%d", &n);
    a[0] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 40001; j++) {
            a[j] = a[j] * 2;
        }
        /**
        * jin wei
        */
        for (int i = 0; i < 40001; i++) {
            tmp = 0;
            if (a[i] > 9) {
                tmp = a[i] / 10;
                a[i + 1] = a[i + 1] + tmp;
                a[i] = a[i] % 10;
            }
        }
    }

    /**
     * find
     */
    for (int i = 40000; i >= 0; i--) {
        if (a[i] != 0) {
            max = i;
            break;
        }
    }
    for (int i = max; i >= 0; i--) {
            printf("%d", a[i]);
    }

    return 0;
}
