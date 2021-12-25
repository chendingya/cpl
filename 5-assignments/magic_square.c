//
// Created by 15845 on 2021/11/13.
//
#include <stdio.h>
#define N 999

int n = 0;
int num[N][N];
int a = 0;
int a_1 = 0;
int b = 0;
int b_1 = 0;
int c = 2;
int judgement = 0;

int judge (int a_1, int b_1);
int main(){
    scanf("%d", &n);
    //chu shi hua
    for (int i = 0; i < 999; i++) {
        for (int j = 0; j < 999; j++) {
            num[i][j] = 0;
        }
    }
    num[0][(n - 1) / 2] = 1;
    b =  (n - 1) / 2;
    for(int i = 2; i <= n * n; i++){
        a_1 = a - 1;
        b_1 = b + 1;
        if(a_1 < 0) {
            a_1 = n - 1;
        }
        if(a_1 > n - 1) {
            a_1 = 0;
        }
        if(b_1 < 0) {
            b_1 = n - 1;
        }
        if(b_1 > n - 1) {
            b_1 = 0;
        }
        judgement = judge(a_1 , b_1);

            if (judgement == 1) {
                a_1 = a + 1;
                b_1 = b;
            }
        a = a_1;
        b = b_1;
        num[a][b] = i;
    }

    //output
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ",num[i][j]);
        }
        if(i < n - 1){
            printf("\n");
        }
    }
    return 0;
}


int judge (int a_1, int b_1) {
    judgement = 0;
    if(num[a_1][b_1] != 0) {
        judgement = 1;
    }
    return judgement;
}