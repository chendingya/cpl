//
// Created by 15845 on 2021/10/27.
//
#include <stdio.h>
int main(){
    int n;
    int k;
    int t;
    scanf("%d%d", &n, &k);

    int a[n + 1] ;
    t = k % n;


    for(int i = 0;i < n;i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0;i < t; i++){
        for(int i = n - 1;i >= 0;i--){
            a[i + 1] = a[i];

        }
        a[0] = a[n];

    }

    for(int i = 0;i < n; i++){
        printf("%d ",a[i]);
    }




    return 0;
}
