//
// Created by 15845 on 2021/10/31.
//
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int a = 0;
    int b = 0;
    char string[3] = {0};
    int ans = 0;
    double ans_1 = 0;
    while (scanf("%d", &a) != EOF) {
        scanf("%s%d", &string, &b);
        if(strcmp(string,"+") == 0){
            ans = a + b;
        }
        if(strcmp(string,"-") == 0){
            ans = a - b;
        }
        if(strcmp(string,"*") == 0){
            ans = a * b;
        }
        if(strcmp(string,"/") == 0){
            ans = a / b;
        }
        if(strcmp(string,"/*") == 0){
            ans_1 = (1.0 * a) / b ;
        }
        if(strcmp(string,"**") == 0){
            ans = pow(a,b);
        }
        if(strcmp(string,"%") == 0){
            ans = a % b;
        }

        //print
        if(strcmp(string,"/*") == 0){
            printf("%.3lf\n", ans_1);
        }else{
            printf("%d\n", ans);
        }
    }
    return 0;
}
