//
// Created by 15845 on 2021/11/23.
//
#include <stdio.h>
#include <math.h>
double simpson(double x, double y);
double integration(int num[],double x);
double digui(double a,double b);
int n,p;
double a,b;
int num[21];
double judge;
int main(){
    scanf("%d%d", &n, &p);
    scanf("\n");
    for (int i = 0; i <= n; i++) {
        scanf("%d", &num[i]);
    }
    scanf("\n");
    scanf("%lf%lf", &a, &b);

    double result =0;
    result = digui(a,b);
    printf("%lf",result);
    return 0;
}
double integration(int num[],double x) {
    double sum = 0;
    for (int i = 0; i <= 20; i++) {
        sum = sum +  num[i] * pow(x,i);
    }
    return pow(sum,p);
}
double simpson(double x, double y) {
    double sum = 0;
    double k_1 = (x + y) / 2.0;
    sum = ( (4.0 * integration(num,k_1) + integration(num,x) + integration(num,y)) / 6.0 ) * (y - x);
    return sum;
}
double digui(double a,double b) {
    judge = simpson(a, (a + b) / 2.0) + simpson((a + b) / 2.0, b) - simpson(a,b);
    if(judge <= 0) {
        judge = judge * (-1.0);
    }
    if (judge <= 0.00015) {
        return ( simpson(a, (a + b) / 2.0) + simpson((a + b) / 2.0, b) + (simpson(a, (a + b) / 2.0) + simpson((a + b) / 2.0, b) - simpson(a, b)) / 15.0);
    } else {
        return digui(a, (a + b) / 2.0) + digui((a + b) / 2.0, b);
    }

}