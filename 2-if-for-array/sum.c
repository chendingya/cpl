//
// Created by 15845 on 2021/10/25.
//
#include <stdio.h>
int main(){
    int sum = 0;
    int n = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        sum += i;
//sum += i :sum = sum + i;
    }
    printf("%d",sum);

    return 0;
}
