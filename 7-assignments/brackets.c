//
// Created by 15845 on 2021/11/27.
//
#include <stdio.h>
char s[100000];
char a[100000];
int n;
int flag;
int main () {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", s);
            int j = 0;
        for (int k = 0; k < 100000; k++) {
            if (s[k] == '(' || s[k] == '[' || s[k] == '{') {
                a[j] = s[k];
                j++;

            }
            if (s[k] == ')' || s[k] == ']' || s[k] == '}') {
                if ( (a[j - 1] == '(' && s[k] == ')') || (a[j - 1] == '{' && s[k] == '}') || (a[j - 1] == '[' && s[k] == ']')) {
                    a[j - 1] = 0;
                    j--;
                } else {
                    flag = 1;
                    printf("False\n");
                    break;
                }
            }
        }
        if (flag == 0) {
            printf("True\n");
        }
        flag = 0;
    }
    return 0;
}
