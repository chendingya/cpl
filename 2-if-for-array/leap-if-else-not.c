//
// Created by 15845 on 2021/10/24.
//
#include <stdio.h>

int main(){
    int year = 0;
    scanf("%d", &year);

    if(year % 400 != 0){
        printf("The year is a common year.\n");
    }else{
        if(year % 100 != 0){
            printf("The year is a leap year.\n");
        }else{
            if(year % 400 != 0){
                printf("The year is a common year.\n");
            }else{
                printf("The year is a leap year.\n");
            }
        }
    }

    return 0;
}

