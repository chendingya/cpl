//
// Created by 15845 on 2021/12/2.
//
#include <stdio.h>
#include<string.h>
#include <math.h>
char n1[50];
char n2[50];
long long int a[50];
long long int b[50];
long long int num1, num2;
long long int result, yushu;
long long int re[50], yu[50];
int main(){
    int len1 = 0;
    int len2 = 0;
    scanf("%s",n1);
    len1 = strlen(n1);
    scanf("%s",n2);
    len2 = strlen(n2);

    for (int i = 0; i < len1; i++) {
        a[i] = (long long int)n1[i] - 48;
    }
    for (int i = 0; i < len2; i++) {
        b[i] = (long long int)n2[i] - 48;
    }


    for (int i = 0; i < len1; i++) {
        num1 = num1 + (long long int)pow(2, len1 - 1 - i) * a[i];
    }
    for (int i = 0; i < len2; i++) {
        num2 = num2 + (long long int)pow(2, len2 - 1 - i) * b[i];
    }
    result = num1 / num2;
    yushu = num1 % num2;

    int i = 0;
    while (result != 0) {
        re[i] = result % 2;
        result = result / 2;
        i++;
    }
    if (i == 0) {
        printf("0\n");
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", re[j]);
        }
        printf("\n");
        i = 0;
    }

    while (yushu != 0) {
        yu[i] = yushu % 2;
        yushu = yushu / 2;
        i++;
    }
    for (int j = 0; j < len1; j++) {
        printf("%d", a[j]);
    }
    for (int j = len2 - 1; j >= 0; j--) {
        printf("%d", yu[j]);
    }
    return 0;
}
