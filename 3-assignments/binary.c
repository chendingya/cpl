//
// Created by 15845 on 2021/11/4.
//
#include <stdio.h>
#include <math.h>

int main(){
    int len = 0;
    scanf("%d", &len);
    char s[len + 1];
    int ans = 0;

    for (int i = len; i >= 0; i--){
         scanf("%c", &s[i]);
     }


    for (int i = len; i > 0; i--){
        int tmp = (int)s[i - 1] - 48;
         ans = pow(2, i- 1) * tmp + ans;
     }


    printf ("%d", ans);

    return 0;
}
