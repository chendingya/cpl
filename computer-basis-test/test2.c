//
// Created by 15845 on 2021/10/26.
//
#include <stdio.h>
int main(){
    int n = 0;
    int target = 0;
    scanf("%d%d", &n, &target);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for (int i = 0;i < n; i++){
        for (int b = 0; b < n; b++){
            if (a[i] + a[b] == target){
                printf("%d %d", a[b], a[i]);

            }
            break;
        }
    }
    return 0;
}
