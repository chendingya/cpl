//
// Created by 15845 on 2021/10/25.
//
#include <stdio.h>
int main(){
    //char char_array[] = "hello world";
    int numbers[5] = {0};
    for (int i = 0; i < 5; i++){
        printf("%d\t", numbers[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++){
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 5; i++){
        printf("%d\t", numbers[i]);
    }
    printf("\n");

    int min = numbers[0];
    for (int i = 1;i < 5; i++){
        if(min >numbers[i]){
            min = numbers[i];
        }
    }
    printf("%d",min);
    return 0;
}
