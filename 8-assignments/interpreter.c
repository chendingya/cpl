//
// Created by 15845 on 2021/12/7.
//
#include <stdio.h>
int main(){
    int b;
    scanf("%x", &b);
    printf("%i\n", b);
    printf("%u\n", b);
    float *a = &b;
    printf("%f\n", *a);
    return 0;
}