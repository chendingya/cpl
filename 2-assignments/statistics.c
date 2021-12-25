//
// Created by 15845 on 2021/10/31.
//
#include <stdio.h>
int main(){
    int n = 0;
    scanf("%d", &n);
    int a[26] = {0};
    char string[n + 1];
    for(int i = 0; i <= n; i++){
        scanf("%c", &string[i]);
        (int)  string[i];
    }
    for(int i = 0; i <= n; i++){
        a[string [i] - 97]++;
    }



    //find the max
    int max = 0;
    int index = 0;
    for(int i = 0; i < 26; i++){
        if(max < a[i]){
            max = a[i];
            index = i;
        }
    }


    //print
    int MAX = max;
     for(int j = 0; j < MAX; j++){
        for(int i = 0; i < 26; i++){
            if(a[i] - max == 0){
                printf(" = ");
                a[i]--;
            }else{
                printf("   ");
            }
        }
        printf("\n");
        max--;
    }

    printf("------------------------------------------------------------------------------\n"
           " a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z ");

    return 0;
}
