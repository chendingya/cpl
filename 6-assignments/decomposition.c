//
// Created by 15845 on 2021/11/24.
//
#include <stdio.h>
void dec(int n, int sum,int k,int flag);
int a[20] = {0};
int sum;
int main(){
    int n = 0;
    scanf("%d", &n);

    int flag = 2;
    for (int j = 1; j <= n; j++) {
        a[0] = j;
        if (j != n){
            for (int k = j; k <= n - 1; k++) {
                a[1] = k;
                sum = j + k;
                dec(n,sum,k,flag);
            }
            sum = 0;
            flag = 2;
        } else {
            printf("%d", a[0]);
        }
    }


    }

void dec(int n,int sum,int k,int flag) {
    if (sum < n) {
        for (int i = k; i <= (n - sum); i++) {
            a[flag] = i;
            if( (n - sum) >= k) {
                dec(n,sum+a[flag],a[flag ],flag+1);
            }

        }
    }
    if (sum == n){
        for (int i = 0; i < flag; i++) {
            printf("%d ", a[i]);
        }
        //

        printf("\n");
    }
}