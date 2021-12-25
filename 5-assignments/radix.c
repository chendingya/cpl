//
// Created by 15845 on 2021/11/15.
//
#include <stdio.h>
#include <math.h>
#define N 3
int a[N];
int b[N];
int c[N];
int p = 0; int p_1 = 0;
int q = 0; int q_1 = 0;
int r = 0; int r_1 = 0;
int is = 0;
int max[N];
int da = 1;
int judge (int p_1, int q_1, int r_1);
int MAX (int a, int b, int c);

int main(){
    /**
     * input
     */
    scanf("%d%d%d", &p, &q, &r);

    /**
     * chai fen
     */
    for (int i = N - 1; i >= 0; i--) {
        a[i] = p / pow(10,i);
        p = p % (int)pow(10,i);
    }
    for (int i = N - 1; i >= 0; i--) {
        b[i] = q / pow(10,i);
        q = q % (int)pow(10,i);
    }
    for (int i = N - 1; i >= 0; i--) {
        c[i] = r / pow(10,i);
        r = r % (int)pow(10,i);
    }
    /**
     * find the max of three
     */
    max[0] = MAX (a[0], a[1], a[2]);
    max[1] = MAX (b[0], b[1], b[2]);
    max[2] = MAX (c[0], c[1], c[2]);
    da = MAX (max[0], max[1], max[2]);
    if (da == 0) {
        da += 1;
    }

    /**
     * judge
     */
    for (int i = da + 1; i <= 40; i++) {
        p_1 = 0;
        q_1 = 0;
        r_1 = 0;
        for (int j = 0; j < N; j++) {
            p_1 = p_1 +  a[j] * pow(i,j);
        }

        for (int j = 0; j < N; j++) {
            q_1 = q_1 + b[j] * pow(i,j);
        }


        for (int j = 0; j < N; j++) {
            r_1 = r_1 + c[j] * pow(i,j);
        }

        is = judge (p_1, q_1, r_1);

        if (is == 1) {
            r = i;
            printf("%d\n",r);
            break;
        }
    }

    if (is == 0) {
        printf("0\n");
    }
    return 0;
}

int judge (int p_1, int q_1, int r_1) {

    if (r_1 == (p_1 * q_1) ) {
        return 1;
    }
    if (r_1 != (p_1 * q_1) ) {
        return 0;
    }
}

int MAX (int a, int b, int c) {
    int tmp = 0;
    if(a <= b){
        if(b >= c){
            tmp = b;
        }else{
            tmp = c;
        }
    }else{// a > b
        if(a >= c){
            tmp = a;
        }else{// a < c
            tmp = c;
        }
    }

    return tmp;
}