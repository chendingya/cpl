//
// Created by 15845 on 2021/10/22.
//
#include <stdio.h>
#include <math.h>
int main(){
    int year = 0;
    int month = 0;
    int day = 0;
    double w = 0;
    int Y[4];
    int y = 0;
    int c = 0;
    int m = 0;


    scanf("%d%d%d",&year,&month,&day);

    if(month == 1 || month == 2){
        year = year - 1;
        Y[0] = year / 1000;
        Y[1] = (year - 1000 * Y[0]) / 100;
        Y[2] = (year - 1000 * Y[0] - 100 * Y[1]) / 10;
        Y[3] = (year - 1000 * Y[0] - 100 * Y[1] - 10 * Y[2]);
    }else{
        Y[0] = year / 1000;
        Y[1] = (year - 1000 * Y[0]) / 100;
        Y[2] = (year - 1000 * Y[0] - 100 * Y[1]) / 10;
        Y[3] = (year - 1000 * Y[0] - 100 * Y[1] - 10 * Y[2]);
    }
    y = 10 * Y[2] + Y[3];
    c = 10 * Y[0] + Y[1] * 1;

    if(month == 1 || month ==2){
        m = 10 + month;
    }else{
        m = month - 2;
    }


    w = (day + floor(2.6 * m - 0.2)+ y +floor(y / 4) + floor(c / 4) - 2 * c);
    int answer = 0;
    answer = (int)w % 7;
    if(answer < 0){
        answer = answer + 7;
    }else{
        answer = answer;
    }

    printf("%d",answer);
    return 0;
}

