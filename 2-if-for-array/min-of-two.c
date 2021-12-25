//
// Created by 15845 on 2021/10/24.
//
#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    int min = 0;

    scanf("%d%d", &a, &b);
    min = a >= b ? b : a;
    //三目运算符：ternary operator :  ? x : y
    /**
     * if (a >= b){
        min = b;
    } else {
        min = a;
    }
    **/

    printf("min{%d %d} = %d\n", a, b, min);

    return 0;
}
