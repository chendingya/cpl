//
// Created by 15845 on 2021/10/18.
//
#include <stdio.h>
int main(){

    int data = 0;
    int i = 0;
    int a[4];
    scanf("%d",&data);
    for(i = 0; i <= 3; i++){
       a[i] = data % 2;
       data = data / 2;
    }
    for(i = 0; i <= 3; i++){
        if( a[i] == a[i+1]){
            a[i] = 0;
        }else {
             a[i] = 1;
        }

    }
    printf("%d%d%d%d",a[3],a[2],a[1],a[0]);
    return 0;
}
