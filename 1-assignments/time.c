//
// Created by 15845 on 2021/10/20.
//
#include <stdio.h>
#include <math.h>

int main(){
    char month[15];
    int day = 0;
    int year = 0;
    char weekday[15];
    int hour = 0;
    int minute = 0;
    int second = 0;

    scanf("%s%d%d%s%d%d%d",month, &day, &year,weekday, &hour, &minute, &second);
    printf("%c%c%c %c%c%c %02d %02d:%02d:%02d %04d",weekday[0],weekday[1],weekday[2],month[0],month[1],month[2],day,hour,minute,second,year);



    /*
     * if(day >= 10){
        printf("%d",day);
    }
    if(day < 10){
        printf("%0d",day);
    }
    if(hour >= 10 && minute >= 10 && second >= 10){
        printf("%c%c%c %c%c%c %d%d:%d:%d %d",day,hour,minute,second,year);
    }
    if(hour < 10 && minute >= 10 && second >= 10){
        printf("%c%c%c %c%c%c %d%0d:%d:%d %d",day,hour,minute,second,year);
    }
    if(hour >= 10 && minute < 10 && second >= 10){
        printf("%c%c%c %c%c%c %d%d:%0d:%d %d",day,hour,minute,second,year);
    }
    if(hour >= 10 && minute >= 10 && second < 10){
        printf("%c%c%c %c%c%c %d%d:%d:%0d",day,hour,minute,second);
    }
    if(hour < 10 && minute < 10 && second >= 10){
        printf("%c%c%c %c%c%c %d%0d:%0d:%d",day,hour,minute,second);
    }
    if(hour < 10 && minute >= 10 && second < 10){
        printf("%c%c%c %c%c%c %d%0d:%d:%0d",day,hour,minute,second);
    }
    if(hour >= 10 && minute < 10 && second <10){
        printf("%c%c%c %c%c%c %d%d:%0d:%0d",day,hour,minute,second);
    }
    if(hour < 10 && minute < 10 && second < 10){
        printf("%c%c%c %c%c%c %d%0d:%0d:%0d",day,hour,minute,second);
    }
    if(year >= 1000){
        printf("%d",year);
    }
    if(year < 1000 && year >= 100){
        printf("%0d",year);
    }
    if(year < 100 && year >= 10){
        printf("%00d",year);
    }
    if(year < 10 && year >= 0){
        printf("%000d",year);
    }
    */



    return 0;
}
