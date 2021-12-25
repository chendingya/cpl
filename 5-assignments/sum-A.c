//
// Created by 15845 on 2021/11/10.
//
#include <stdio.h>
#include <math.h>

int main(){
    int n = 0;
    int t = 0;
    int sum = 0;
    int tmp = 0;
    int c = 0;

    scanf("%d%d", &n, &t);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            for (int k = 0; k <= j; k++) {
                c = pow(10,k) * t;
            }
            tmp = tmp + c;
            }
            sum = sum + tmp;
            tmp = 0;
    }
    printf("%d", sum);
    return 0;
}
