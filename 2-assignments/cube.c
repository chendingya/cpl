//
// Created by 15845 on 2021/10/31.
//
#include <stdio.h>
int main(){
    /**
     * 最高n层，每一行一个正整数  表示在第 ii 层标了多少个 i，
     */
    long long n = 0;
    scanf("%lld", &n);

    long long a[n];
    for(long long i = n - 1; i >= 0 ;i--){
        scanf("%lld", &a[i]);
    }

    long long cube = 0;
    for(long long i = 0; i < n; i++){
        cube = cube + (i + 1) * a[i];
    }

    printf("%lld", cube);
    return 0;
}
