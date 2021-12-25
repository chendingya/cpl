//
// Created by 15845 on 2021/10/18.
//
#include <stdio.h>
#include <math.h>
int main(){
    double h = 6.626e-34;
    double v = 0;
    scanf("%lf", &v);
    double E = h * v;
    printf("%.2e",E);
    return 0;
}
