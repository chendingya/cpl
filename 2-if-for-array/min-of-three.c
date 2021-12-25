//
// Created by 15845 on 2021/10/24.
//
#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    int min;
    scanf("%d%d%d", &a, &b, &c);
    if(a >= b){
        if(b >= c){
            min = c;
        }else{
            min = b;
        }
    }else{// a < b
        if(a >= c){
            min = c;
        }else{// a < c
            min = a;
        }
    }
    printf("min{%d,%d,%d} = %d", a, b, c, min);

    return 0;
}