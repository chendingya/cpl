//
// Created by 15845 on 2021/11/13.
//
#include <stdio.h>
#define N 2001
int p[N] = {0};
int a[N] = {0};
int n = 0;
int m = 0;
int k = 0;
int tmp = 2000;
int flag = 0;
int min = 0;


int main(){
    /**
     * input
     */
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &p[i]);
    }


    /**
     *find len of 最长递降后缀 = m
     * find k
     */
     m = 1;
    for (int i = n - 1; i >= 0; i--) {
        if (p[i] > p[i + 1]) {
            m++;
            k = i;
        } else {
            k = i;
            break;
        }
    }


    /**
     * find the min (> pk) among 最长递降后缀  ==> tmp
     */
    for (int i = k; i <= n; i++) {
        if (p[i] > p[k] && p[i] <= tmp && m != 1) {
            tmp = p[i];
            min = i;
        }
        if (m == 1) {
            tmp = p[n];
            k = n - 1;
            min = n;
        }

    }

    /**
     * exchange
     */
         p[min] = p[k];
         p[k] = tmp;


    /**
     * overturn hou m wei
     */
    if (m != 0){
        for (int i = n - m + 1; i <= n; i++) {
            a[2 * n - i - m + 1] = p[i];
        }
        for (int i = n - m + 1; i <= n; i++) {
            p[i] = a[i];
        }
    }

    /**
     * output
     */
    for (int i = 1; i <= n; i++) {
        printf("%d ",p[i]);
    }

    return 0;
}
