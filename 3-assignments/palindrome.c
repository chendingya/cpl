//
// Created by 15845 on 2021/11/4.
//
#include <stdio.h>
int main(){
    int n = 0;
    scanf("%d", &n);
    char s[n + 1];


        scanf("%s", s);




    for(int i = 0; i < n; i++){
        if(s[i] == '?'){
            s[i] = s[n - i - 1];
        }
    }

    for(int i = 0; i < n; i ++){
        printf("%c", s[i]);
    }
    return 0;
}

