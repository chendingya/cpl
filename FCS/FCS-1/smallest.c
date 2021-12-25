//
// Created by 15845 on 2021/10/27.
//
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }



    int min = 1;
    for(int i = 0; i < n; i++){
        if(min == a[i]){
            min++;
        }else{
            printf("%d", min);
            break;
        }
    }
    if(min == n + 1){
        printf("%d", min);
    }

    return 0;
}
