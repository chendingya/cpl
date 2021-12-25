//
// Created by 15845 on 2021/10/20.
//
#include <stdio.h>
#include <math.h>

int main() {
    double a = 0;
    double b = 0;
    double c = 0;
    scanf("%lf%lf%lf", &a, &b, &c);
    double x_1 = 0;
    double x_2 = 0;
    double n = 0;
    n = pow(b, 2) - 4 * a * c;
    x_1 = (-sqrt(n) - b)/(2 * a);
    x_2 = (sqrt(n) - b)/(2 * a);


    printf("%.3f %.3f", x_1, x_2);

    return 0;
}
