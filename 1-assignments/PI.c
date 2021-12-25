//
// Created by 15845 on 2021/10/18.
//
#include <stdio.h>
#include <math.h>
int main(){
    double PI_1 = ( 4.0 * atan(1.0 / 5) - atan(1.0 / 239) ) * 4.0;
    double PI_2 = log( pow ( 640320.0,3) + 744.0) / ( sqrt (163.0));
    printf("%.15f\n%.15f\n",PI_1,PI_2);

    return 0;
}
