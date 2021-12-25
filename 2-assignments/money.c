//
// Created by 15845 on 2021/10/31.
//
#include <stdio.h>

int main(){
    int n = 0;
    //消费了n次
    scanf("%d", &n);
    int a[n];

    int money = 0;

    for(int i = 0; i < n; i++){
        int j = 0;
        scanf("%d%d", &a[i], &j);
        if(a[i] == 2){
            money = money + j;
        }else{
            money = money - j;
        }
    }

    printf("%d", money);

    return 0;
}
