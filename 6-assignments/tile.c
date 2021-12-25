//
// Created by 15845 on 2021/11/21.
//
#include <stdio.h>
int sum(int x);
int a[41] = {0};
int main(){
    a[1] = 1;
    a[2] = 2;
    int n = 0;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}
int sum(int x){
    if (x == 1 || x == 2) {
        return (x == 1) ? 1 : 2;
    } else {
        return sum(x - 1) + sum(x - 2);
    }
}