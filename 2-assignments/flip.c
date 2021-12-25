//
// Created by 15845 on 2021/10/31.
//
#include <stdio.h>
#include <math.h>
int main(){
    int n = 0;
    scanf("%d" ,&n);
    int b = floor(pow(n,1.0 / 2));
    int a[b];

     for(int i = 1; i <= b; i++){
       a[i] = i * i;
    }

    for(int i = 1; i <= b; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
