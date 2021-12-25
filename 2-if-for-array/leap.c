//
// Created by 15845 on 2021/10/25.
//
#include <stdio.h>
int main(){
    int year = 0;
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0 ) ||(year % 400 == 0)){
        printf("The year %d is a leap year.\n",year);

    }else{
        printf("The year %d is a common year.\n",year);
    }

    return 0;
}
