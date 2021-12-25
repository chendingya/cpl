//
// Created by 15845 on 2021/11/13.
//
#include <stdio.h>
#include <math.h>
#define N 20

int a[N + 1] = {0};
int n = 0;
int fx (double p1, double p2);
double num_1 = 0;
double num_2 = 0;
double l = 0;
double r = 0;
double p1 = 0;
double p2 = 0;


int main(){

    int judge = 0;
    // input
    scanf("%d", &n);
    for(int i = n; i >= 0; i--) {
        scanf("%d", &a[i]);
    }

    scanf("%lf%lf", &l, &r);

    //shorten
    while( ( l - r ) <= -0.00000001) {
        p1 = l + (r - l) / 3.0;
        p2 = l + ( 2 * (r - l) ) / 3.0;

        judge = fx(p1,p2);

        if (judge == 1) {
            r = p2;
        }
        if (judge == 2) {
            l = p1;
        }
    }
    printf("%.6lf", l);

    return 0;
}

int fx (double p1, double p2) {
    //calculate fp1 and fp2
    num_1 = 0;
    num_2 = 0;
    for (int i = n; i >= 0; i--) {
        num_1 = num_1 + a[i] * pow(p1,i);
    }
    for (int i = n; i >= 0; i--) {
        num_2 = num_2 + a[i] * pow(p2,i);
    }


    if (num_1 >= num_2) {
        return 1;
    }
    if (num_1 < num_2) {
        return 2;
    }

}