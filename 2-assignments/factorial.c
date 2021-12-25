//
// Created by 15845 on 2021/11/1.
//
#include <stdio.h>
int main(){
    int n = 0;
    scanf("%d", &n);
    long long num_j = 1;
    long long num_i = 0;
    long long ans = 0;

    for(int i  = 1; i <= n; i++){
        int num_j = 1;
        for(int j = 1; j <= i; j++){
            num_j = num_j * j;
            num_j = num_j % 10007;

        }
        num_i = num_i + num_j;


    }
    ans = num_i % 10007;
    printf("%d", ans);

    return 0;
}
