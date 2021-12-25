//
// Created by 15845 on 2021/10/31.
//
#include <stdio.h>
int main(){
    int n = 0;
    scanf("%d", &n);
    int a[2 * n - 1];
    int b[100001] = {0};
    for(int i = 0; i < 2 * n - 1; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 2 * n - 1; i++){
       b[a[i]]++;
    }

    for(int i = 1; i <= n; i++){
       if(b[i] == 1){
           printf("%d", i);
       }
    }
    return 0;
}
