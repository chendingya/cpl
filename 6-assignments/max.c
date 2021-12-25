//
// Created by 15845 on 2021/11/22.
//
#include <stdio.h>
int num[100001][3] = {0};
int tmp = 0;
int n;
void max(int l, int r);
int main(){


    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &num[i][0]);
    }

    max(1, n);

    for (int i = 1; i <= n; i++) {
        printf("%d %d\n", num[i][1], num[i][2]);
    }
    return 0;
}
void max(int l,int r) {
    int p = l;
    /**
    * find the max
    */
    tmp = num[l][0];
    for (int i = l; i <= r; i++) {
        if (num[i][0] >= tmp) {
            tmp = num[i][0];
            p = i;
        }
    }


    if (l == r) {
        num[p][1] = l;
        num[p][2] = r;
    } else {
        if (p != l && p != r) {
            num[p][1] = l;
            num[p][2] = r;
            max(l, p - 1);
            max(p + 1, r);
        }
        if (p == l) {
            num[p][1] = l;
            num[p][2] = r;
            max(p + 1, r);
        }
        if (p == r) {
            num[p][1] = l;
            num[p][2] = r;
            max(l, p - 1);
        }
    }
}