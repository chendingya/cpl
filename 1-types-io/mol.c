//
// Created by chendingya on 2021/10/17.
//
#include <stdio.h>
int main(){
    const double MOL = 6.02e23;
    double quantity = 6.0 / 32 * MOL;

    printf("%.3e\n%.5g\n",quantity,quantity);

    return 0;
}