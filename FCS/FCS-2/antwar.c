//
// Created by 15845 on 2021/11/21.
//
#include <stdio.h>

int flag = 1;
int n_1 = 0;
int main(){
    int n = 0;
    int a[10003] = {0};
    scanf("%d", &n);
    /**
     * input
     */
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    /**
     * battle
     */
     n_1 = n;
     while (flag != 0) {
         flag = 0;
         for (int i = 0; i < n_1; i++) {

             if (a[i] > 0 && a[i + 1] < 0) {

                 if (a[i] + a[i + 1] == 0) {
                     for (int k = i; k < n; k++) {
                         a[k] = a[k + 2];
                     }
                     flag = flag + 1;
                     n_1 = n_1 - 2;

                 } else if (a[i] + a[i + 1] > 0) {
                     for (int k = i + 1; k < n; k++) {
                         a[k] = a[k + 1];
                     }
                     flag = flag + 1;
                     n_1 = n_1 - 1;
                 } else if (a[i] + a[i + 1] < 0) {
                     for (int k = i; k < n; k++) {
                         a[k] = a[k + 1];
                     }
                     flag++;
                     n_1 = n_1 - 1;
                 }


             }
         }

     }

     /**
      * output
      */
    for (int i = 0; i < n_1; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
