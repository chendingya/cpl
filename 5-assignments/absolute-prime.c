//
// Created by 15845 on 2021/11/13.
//
#include <stdio.h>
#include <math.h>

int is_prime (int x);
int overturn (int x);

int main(){
    int n = 0;
    int num = 0;
    int j = 0;
    int j_1 = 0;
    scanf("%d", &n);

    for(int x = 1; x <= n; x++) {
        j = is_prime(x);
        int over_x = 0;

        if(j == 1) {
            over_x = overturn(x);
            j_1 = is_prime(over_x);

            if(j_1 == 1){
                num++;
            }
        }


        j = 0;
        j_1 = 0;

    }
    printf("%d", num);
    return 0;
}

int is_prime (int x){
    //要判定是否是素数的数
    int flag = 1;//1表示是素数
    if (x == 1) {
        flag = 0;
    }
    if (x != 1) {
        for(int i = 2;i <= sqrt(x + 0.5); i++)
            if(x % i == 0) flag = 0;
    }
    return flag;
}

int overturn (int a){
    int a_1 = 0;

    while(a != 0){
        a_1 = a_1 * 10;
        a_1 = a_1 + a % 10;
        a = a / 10;
    }
    return a_1;
}
