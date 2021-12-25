//
// Created by 15845 on 2021/10/18.
//
#include <stdio.h>
int main(){
    int num = 0;
    int a[3];
    int b[3];
    scanf("%d", &num);

    a[2] = num % 100;
    b[2] = num / 100;
    a[1] = a[2] % 10;
    b[1] = a[2] / 10;
    a[0] = a[1];
    b[0] = a[1];
    printf("%d%d%d",b[0], b[1], b[2]);
    return 0;

}
