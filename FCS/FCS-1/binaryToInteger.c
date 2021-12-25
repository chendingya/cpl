//
// Created by 15845 on 2021/10/27.
//
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[32] ={0};

    if(n >=0) {
        a[31] = 0;
        printf("%d",a[31]);
        for (int i = 0; i < 31; i++) {
            a[i] = n % 2;
            n = n / 2;
        }
        for(int i = 0; i < 31; i++){
            printf("%d", a[30 - i]);
        }

    }else
    {
        n = -n;
        a[31] = 1;
        printf("%d",a[31]);
        for (int i = 0; i < 31; i++) {
            a[i] = n % 2;
            n = n / 2;
        }

        for(int i = 0; i <= 30; i++){
            a[i] = 1 - a[i];
        }

        a[0] = a[0] + 1;
        for(int i = 0;i <= 30; i++)
            if(a[i] == 2){
                a[i] = 0; a[1 + i] = a[1 + i] + 1;
            }

        for(int i = 1; i <= 31; i++){
            printf("%d", a[31 - i]);
        }

    }
    return 0;
}
