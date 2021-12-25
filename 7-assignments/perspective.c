//
// Created by 15845 on 2021/11/26.
//
#include <stdio.h>
int a[1000][1000] = {0};
int MAX_row(int i, int big, int a[][1000]);
int MAX_col(int i, int big, int a[][1000]);
int row[1000];
int col[1000];
int main(){
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    scanf("\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }


    /**
     * find the max of row: n
     */
    for (int i = 0; i < n; ++i) {
        row[i] = MAX_row(i,m,a);
    }
    /**
     * find the max of col: m
     */
    for (int i = 0; i < m; ++i) {
        col[i] = MAX_col(i,n,a);
    }


    int biggest1 = 0;
    int biggest2 = 0;
    for (int i = 0; i < n; i++) {
        if (row[i] > biggest1) {
            biggest1 = row[i];
        }
    }
    for (int i = 0; i < m; i++) {
        if (col[i] > biggest2) {
            biggest2 = col[i];
        }
    }
    /**
     * print row
     */
     for (int i = biggest2; i > 0 ; i--) {
        for (int k = 0; k < m; k++) {
            if (col[k] == biggest2) {
                printf("*");
                col[k]--;
            } else {
                printf(" ");
            }
        }
        printf("\n");
        biggest2--;
    }
    printf("\n");

    /**
     * print col
     */
    for (int i = biggest1; i > 0 ; i--) {
        for (int k = 0; k < n; k++) {
            if (row[k] == biggest1) {
                printf("*");
                row[k]--;
            }else {
                printf(" ");
            }
        }
        printf("\n");
        biggest1--;
    }
    return 0;
}
int MAX_row(int i,int big,int a[][1000]) {
    int max = a[i][0];
    for (int k = 0; k < big; k++) {
        if (a[i][k] > max) {
            max = a[i][k];
        }
    }
    return max;
}
int MAX_col(int i, int big, int a[][1000]){
    int max = a[0][i];
    for (int k = 0; k < big; k++) {
        if (a[k][i] > max) {
            max = a[k][i];
        }
    }
    return max;
}