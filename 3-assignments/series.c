//
// Created by 15845 on 2021/11/7.
//
#include <stdio.h>

int main(){
    int n = 0;
    int x = 0;
    double ans = 0;
    double c = 1;

    scanf("%d%d", &n, &x);
    for(int i = 0; i <= n; i++) {
        if (i == 0) {
            ans = ans + 1.0;

        }else{
            c = 1;
            for(int j = 1; j <= i; j++){
                c = c * ( x * 1.0 / j) ;
            }
            ans = ans + c;
        }
    }

    printf("%.3lf", ans);
    return 0;
}
