//
// Created by 15845 on 2021/11/27.
//
#include <stdio.h>
char a[10005] = {'0'};
char b[5] = {'0'};
void push (int i, char x);
int pop (int i);
void top (int i);
void print (int i);
int main(){
    int n = 0;
    int tmp = 0;
    scanf("%d", &n);
    scanf("\n");

    int i = 0;
    for (int j = 0; j < n; j++) {
        scanf("%s", b);

        if (b[0] == 't') {
            top(i);
            b[0] = 0;
        } else {
            if (b[1] == 'o') {

                tmp = pop(i);
                i = tmp;

            }
            if (b[1] == 'u') {
                scanf(" ");
                scanf("%c", &b[4]);

                push (i, b[4]);
                i++;

                b[2] == '0';
            }
            if (b[1] == 'r') {
                print(i);

            }
        }
        scanf("\n");
        for (int l = 0; l < 5; l++) {
            b[l] = '0';
        }
    }

    return 0;
}
void push (int i, char x){
    a[i] = x;
}
int pop (int i){
    if (a[0] == '0') {
        printf("Empty\n");
        return i;
    } else {
        a[i - 1] = '0';
        return i - 1;
    }
}
void top (int i){
    if (i == 0) {
        printf("Empty\n");
    } else {
        printf("%c\n", a[i - 1]);
    }
}
void print (int i){
    if (i == 0) {
        printf("Empty\n");
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("| %c |\n", a[j]);
        }
        printf("|===|\n");
    }
}