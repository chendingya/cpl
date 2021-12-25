//
// Created by 陈鼎亚 on 2021/10/17.
//

#include <stdio.h>
#include <math.h>
  int main(){
    int radius = 100;
    const double PI = 3.14159;

    double surface_area = 4 * PI * pow(radius,2);
    /**
     * In C , 4 / 3 = 1
     * x^y
     */
    double volume = 4.0 / 3 * PI * pow(radius,3);
    printf("%-15.4f : surface_area\n%-15.4f : volume\n",surface_area,volume);

    return 0;
}

