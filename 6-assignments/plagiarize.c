//
// Created by 15845 on 2021/11/21.
//
#include <stdio.h>
int f[100005];
int n;
int find(int x, int y){
    if(x == y) {
        return x;
    }
        return find(y,f[y]);

}
int main(){
    scanf("%d", &n);
    //chu shi hua
    for (int i = 1; i < n + 1; i++) {
        scanf("%d", &f[i]);
    }

    for (int i = 1; i < n + 1; i++) {
        f[i] = find(i,f[i]);
    }
    /**
     * output
     */
    for (int i = 1; i < n + 1; i++) {
        if (i != n) {
            printf("%d ", f[i]);
        } else {
            printf("%d", f[i]);
        }

    }

    return 0;
}
