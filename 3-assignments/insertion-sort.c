//
// Created by 15845 on 2021/11/7.
//
#include <stdio.h>
int main(){
    int n = 0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }


    int b = 0;
    printf("%d\n", a[0]);
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            b = a[j];
            if( a[i] < a[j]){
               a[j] = a[i];
               a[i] = b;
            }
        }
        for(int k = 0; k <= i; k++){
            printf("%d ", a[k]);
        }
        printf("\n");
    }

    return 0;
}
