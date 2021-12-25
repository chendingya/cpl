//
// Created by 15845 on 2021/11/7.
//
#include <stdio.h>
int main(){
    int n = 0;
    scanf("%d", &n);
    int index = n;
    int x = 0;
    int a[n];
    int b[n];
    for (int i = 0;i < n; ++i) {
        a[i] = i + 1;
    }
    int k = 0;
    scanf("%d", &k);

    for (int i = 0; i < n; ++i) {
        b[i] = 0;
    }

    if(n >= 2){
        do {
            if (index >= k){
                for (int i = 0; i < index  - 1; i++) {
                    if(k + i <= index - 1){
                        b[i] = a[k + i];
                    } else{
                        b[i] = a[k + i - index];
                    }
                }

                a[index] = 0;
                for (int i = 0; i < index - 1; i++) {
                    a[i] = b[i];
                }

                for (int i = 0; i < n; i++) {
                    b[i] = 0;
                }
                index--;

            }else{
                x = k % index;
                for (int i = 0; i < index  - 1; i++) {
                    if(x + i <= index - 1){
                        b[i] = a[x + i];
                    } else{
                        b[i] = a[x + i - index];
                    }
                }

                a[index] = 0;
                for (int i = 0; i < index - 1; i++) {
                    a[i] = b[i];

                }

                for (int i = 0; i < n; i++) {
                    b[i] = 0;
                }
                index--;
            }
            a[index] = 0;
        } while (a[1] != 0);
        printf("%d\n", a[0]);

    }else{
        printf("1");
    }


    return 0;
}
