//
// Created by 15845 on 2021/11/22.
//
#include <stdio.h>
int num[36][36] = {0};
int YangHui(int x, int y);
int main(){
    int a,b;
    int tmp = 0;
    scanf("%d%d", &a, &b);
    //chu shi hua

    for (int i = 1; i < 36; i++) {
        num[i][1] = 0;
        num[i][i] = 0;
    }
    tmp = YangHui(a,b);
    printf("%d", tmp);
    return 0;
}
int YangHui(int x, int y) {
    if (y == 1 || (x == y)) {
        return 1;
    } else {
        return YangHui(x - 1, y - 1) + YangHui(x - 1, y);
    }
}