//
// Created by 15845 on 2021/10/31.
//

/**
 * 从一组已经排序的数中用二分法找一个数，输出一个下标
 */
#define LEN 10
int dict[LEN] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
#include <stdio.h>
int main(){
    int key = 0;
    scanf("%d", &key);

    int index = -1;

    int low = 0;
    int high = LEN - 1;


    while (low <= high){
        int mid = (low + high) / 2;
        if(key > dict[mid]){
            low = mid + 1;
        }else if(key <dict[mid]){
            high = mid - 1;
        }else{//key =dict[mid]
            index = mid;
            break;
        }
    }

    if(index == -1){
        printf("Not found!\n");
    }else{
        printf("The index of %d is %d.\n", key, index);
    }
    return 0;
}
