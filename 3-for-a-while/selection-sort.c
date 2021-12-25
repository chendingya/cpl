//
// Created by 15845 on 2021/10/30.
//
#include <stdio.h>
/**
 * VLA: variable-length array
 * int n = 0;
 * int numbers[n];
 * 不可初始化
 */
#define MAX 20
int numbers[MAX] = {0};

int main(){
    int len = -1;
    while(scanf("%d", &numbers[++len]) != EOF);

    /**
   * Print it out
   */
    printf("\n");
    for (int i = 0; i < len; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    /**
     * find the minimum valve among numbers[i]——numbers[len - 1]
     */
    for(int i = 0; i < len; i++){
        int min = numbers[i];
        int min_index = i;
        for(int j = i + 1; j < len - 1; j++){
            if(min > numbers[j]){
                min = numbers[j];
                min_index = j;
            }
        }

        /**
         * swap numbers[i] and numbers[min_index]
         */
         int tmp = 0;
         tmp = min;
         numbers[i] = numbers[min_index];
         numbers[min_index] = tmp;
    }

    for(int i = 0;i < len; i++){
        printf("%d", numbers[i]);
    }

    /**
   * Print it out again
   */
    printf("\n");
    for (int i = 0; i < len; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}
