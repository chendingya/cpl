//
// Created by 15845 on 2021/10/27.
//
#include <stdio.h>
int main(){
    int m;
    int n;
    int p;
    scanf("%d%d", &m, &n);
    int a[m];
    int b[n];
    p = m + n;
    int c[p];
    int d[p];
    int d_index = 0;


    for(int i = 0; i < m; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }

    for(int i = 0; i < m; i++){
        c[i] = a [i];
    }

    for(int i = 0; i < n; i++){
        c[i + m] = b [i];
    }


    for (int i = 0; i < m + n; i++) {

        int min = c[i];
        int min_index = i;
        for (int j = i + 1; j < m + n; j++) {
            if (min > c[j]) {
                min = c[j];
                min_index = j;
            }
        }

        int tmp;
        tmp = c[i];
        c[i] = c[min_index];
        c[min_index] = tmp;
    }


    d[0] = c[0];
    for(int i = 1; i < p; i++){
        if(c[i] != c[i - 1]){
            d[d_index + 1] = c[i];
            d_index++;
        }
    }
    for(int i = 0; i < d_index + 1; i++){
        printf("%d ", d[i]);
    }

    return 0;
}
