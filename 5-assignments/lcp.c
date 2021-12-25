//
// Created by 15845 on 2021/11/13.
//
#include <stdio.h>
#define N 101
char board[N][N];
int compare (int a, int b);
int num[N];

int main() {
    int n = 0;
    int q = 0;
    int a = 0;
    int b = 0;


    for (int i = 0; i < N - 1; i++) {
        num[i] = 0;
    }

    scanf("%d%d", &n, &q);

    for (int i = 0; i < n; i++) {
            scanf("%s", board[i]);
    }

    for (int i = 0; i < q; i++) {
        scanf("%d%d", &a, &b);
        scanf("\n");
        num[i] = compare(a,b);
    }

///output
    for (int i = 0; i < q; i++) {
        printf("%d\n", num[i]);

    }

    return 0;
}

int compare (int a, int b){
    int i = 0;
    int cal = 0;
    while (board[a - 1][i] != '\0' && board[b - 1][i] != '\0'){
        if(board[a - 1][i] == board[b - 1][i]) {
            cal++;
            i++;
        } else {
            break;
        }

    }
    return cal;
}
