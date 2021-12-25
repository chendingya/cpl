//
// Created by 15845 on 2021/11/28.
//
#include <stdio.h>
int vol[10000];
int val[10000];
int value;
void PaiXu (int n, int a[],int b[]);
int main () {
    int n = 0;
    int l = 0;
    scanf("%d%d", &n, &l);
    for (int i = 0; i < n; i++) {
        scanf("%d", &val[i]);
    }
    scanf("\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vol[i]);
    }
    scanf("\n");
    PaiXu(n,val,vol);


    for (int i = 0; i < n; i++) {
        if (l >= vol[i]) {
            l = l - vol[i];
            value = value + val[i] * vol[i];
        } else {//l < vol[i]
            value = value + val[i] * l;
            l = 0;
        }
    }
    for (int i = 0; i < 10000; i++) {
        vol[i] = 0;
        val[i] = 0;
    }
    printf("%d", value);
    return 0;
}
void PaiXu (int n, int a[], int b[]) {
    int tmp = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; ++j) {
            if (a[j + 1] > a[j]) {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                tmp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = tmp;
            }

        }

    }
}