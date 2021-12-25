//
// Created by 15845 on 2021/10/17.
//
#include <stdio.h>


int main() {
    int radius = 10;
    const double PI = 3.14159;
    /**
     * assignment (赋值） statement
     */

    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    printf("circumference = %.2f\narea = %.2f", circumference, area);

    return 0;
}