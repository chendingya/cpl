//
// Created by chendingya on 2021/10/18.
//
#include <stdio.h>
int main(){
    int f = 0;
    int f_ascii = 0;
    int F_ascii = 0;
    scanf("%d", &f);
    if (f <= 90 && f >= 65){
         f_ascii = f ;
         F_ascii = f + 32;
    } else{
         F_ascii = f;
         f_ascii = f - 32;
    }



    printf("%d\n%c\n%c\n",f,F_ascii,f_ascii);

    return 0;

}

