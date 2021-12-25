//
// Created by 15845 on 2021/10/18.
//
#include <stdio.h>
int main(){

    int i = 0;
    scanf("%d", &i);
    int twenty = i / 20;
    int ten = (i - 20 * twenty) / 10;
    int five = (i - 20 * twenty - 10 * ten) / 5;
    int one = (i - 20 * twenty - 10 * ten - 5 * five);
    printf("%d\n%d\n%d\n%d\n",twenty,ten,five,one);
    return 0;
}
