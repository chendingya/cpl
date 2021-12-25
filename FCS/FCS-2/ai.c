//
// Created by 15845 on 2021/11/21.
//
#include <stdio.h>

int n;
int a[12] = {0};
int len = 0;
int main(){
    scanf("%d", &n);
    scanf("\n");

    /**
     * chai fen
     */
    for (int i = 0; i < 12; i++) {
        a[i] = n % 10;
        n = n / 10;
    }

    /**
     *
     */

         switch (a[9]) {
             case 9:
                 printf("Nine ");
                 break;
             case 8:
                 printf("Eight ");
                 break;
             case 7:
                 printf("Seven ");
                 break;
             case 6:
                 printf("Six ");
                 break;
             case 5:
                 printf("Five ");
                 break;
             case 4:
                 printf("Four ");
                 break;
             case 3:
                 printf("Three ");
                 break;
             case 2:
                 printf("Two ");
                 break;
             case 1:
                 printf("One ");
                 break;
         }
     if (a[9] > 0) {
         printf("Billion ");
     }
        switch (a[8]) {
            case 9:
                printf("Nine Hundred ");
                break;
            case 8:
                printf("Eight Hundred ");
                break;
            case 7:
                printf("Seven Hundred ");
                break;
            case 6:
                printf("Six Hundred ");
                break;
            case 5:
                printf("Five Hundred ");
                break;
            case 4:
                printf("Four Hundred ");
                break;
            case 3:
                printf("Three Hundred ");
                break;
            case 2:
                printf("Two Hundred ");
                break;
            case 1:
                printf("One Hundred ");
                break;
        }
        switch (a[7]) {
            case 9:
                printf("Ninety ");
                break;
            case 8:
                printf("Eighty ");
                break;
            case 7:
                printf("Seventy ");
                break;
            case 6:
                printf("Sixty ");
                break;
            case 5:
                printf("Fifty ");
                break;
            case 4:
                printf("Forty ");
                break;
            case 3:
                printf("Thirty ");
                break;
            case 2:
                printf("Twenty ");
                break;
            case 1:
                if (a[6] > 0) {
                    switch (a[6]) {
                        case 9:
                            printf("Nineteen ");
                            break;
                        case 8:
                            printf("Eighteen ");
                            break;
                        case 7:
                            printf("Seventeen ");
                            break;
                        case 6:
                            printf("Sixteen ");
                            break;
                        case 5:
                            printf("Fifteen ");
                            break;
                        case 4:
                            printf("Fourteen ");
                            break;
                        case 3:
                            printf("Thirteen ");
                            break;
                        case 2:
                            printf("Twelve ");
                            break;
                        case 1:
                            printf("eleven ");
                            break;
                    }
                } else {
                    printf("Ten ");
                    break;
                }

        }

    if (a[7] != 1 && a[6] > 0) {
        switch (a[6]) {
            case 9:
                printf("Nine ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 6:
                printf("Six ");
                break;
            case 5:
                printf("Five ");
                break;
            case 4:
                printf("Four ");
                break;
            case 3:
                printf("Three ");
                break;
            case 2:
                printf("Two ");
                break;
            case 1:
                printf("One ");
                break;
        }
    }
    if (a[8] > 0 || a[7] > 0 || a[6] > 0) {
        printf("Million ");
        }
            switch (a[5]) {
                case 9:
                    printf("Nine Hundred ");
                    break;
                case 8:
                    printf("Eight Hundred ");
                    break;
                case 7:
                    printf("Seven Hundred ");
                    break;
                case 6:
                    printf("Six Hundred ");
                    break;
                case 5:
                    printf("Five Hundred ");
                    break;
                case 4:
                    printf("Four Hundred ");
                    break;
                case 3:
                    printf("Three Hundred ");
                    break;
                case 2:
                    printf("Two Hundred ");
                    break;
                case 1:
                    printf("One Hundred ");
                    break;
            }

            switch (a[4]) {
                case 9:
                    printf("Ninety ");
                    break;
                case 8:
                    printf("Eighty ");
                    break;
                case 7:
                    printf("Seventy ");
                    break;
                case 6:
                    printf("Sixty ");
                    break;
                case 5:
                    printf("Fifty ");
                    break;
                case 4:
                    printf("Forty ");
                    break;
                case 3:
                    printf("Thirty ");
                    break;
                case 2:
                    printf("Twenty ");
                    break;
                case 1:
                    if (a[3] > 0) {
                        switch (a[3]) {
                            case 9:
                                printf("Nineteen ");
                                break;
                            case 8:
                                printf("Eighteen ");
                                break;
                            case 7:
                                printf("Seventeen ");
                                break;
                            case 6:
                                printf("Sixteen ");
                                break;
                            case 5:
                                printf("Fifteen ");
                                break;
                            case 4:
                                printf("Fourteen ");
                                break;
                            case 3:
                                printf("Thirteen ");
                                break;
                            case 2:
                                printf("Twelve ");
                                break;
                            case 1:
                                printf("eleven ");
                                break;
                        }
                    } else {
                        printf("Ten ");
                        break;
                    }
            }
    if (a[4] != 1 && a[3] > 0) {
        switch (a[3]) {
            case 9:
                printf("Nine ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 6:
                printf("Six ");
                break;
            case 5:
                printf("Five ");
                break;
            case 4:
                printf("Four ");
                break;
            case 3:
                printf("Three ");
                break;
            case 2:
                printf("Two ");
                break;
            case 1:
                printf("One ");
                break;
        }
    }
        if (a[5] > 0 || a[4] > 0 || a[3] > 0) {
            printf("Thousand ");
        }
                switch (a[2]) {
                    case 9:
                        printf("Nine Hundred ");
                        break;
                    case 8:
                        printf("Eight Hundred ");
                        break;
                    case 7:
                        printf("Seven Hundred ");
                        break;
                    case 6:
                        printf("Six Hundred ");
                        break;
                    case 5:
                        printf("Five Hundred ");
                        break;
                    case 4:
                        printf("Four Hundred ");
                        break;
                    case 3:
                        printf("Three Hundred ");
                        break;
                    case 2:
                        printf("Two Hundred ");
                        break;
                    case 1:
                        printf("One Hundred ");
                        break;
                }

            if (a[1] > 0 && a[0] != 0) {
                switch (a[1]) {
                    case 9:
                        printf("Ninety ");
                        break;
                    case 8:
                        printf("Eighty ");
                        break;
                    case 7:
                        printf("Seventy ");
                        break;
                    case 6:
                        printf("Sixty ");
                        break;
                    case 5:
                        printf("Fifty ");
                        break;
                    case 4:
                        printf("Forty ");
                        break;
                    case 3:
                        printf("Thirty ");
                        break;
                    case 2:
                        printf("Twenty ");
                        break;
                    case 1:
                        if (a[0] > 0) {
                            switch (a[0]) {
                                case 9:
                                    printf("Nineteen");
                                    break;
                                case 8:
                                    printf("Eighteen");
                                    break;
                                case 7:
                                    printf("Seventeen");
                                    break;
                                case 6:
                                    printf("Sixteen");
                                    break;
                                case 5:
                                    printf("Fifteen");
                                    break;
                                case 4:
                                    printf("Fourteen");
                                    break;
                                case 3:
                                    printf("Thirteen");
                                    break;
                                case 2:
                                    printf("Twelve");
                                    break;
                                case 1:
                                    printf("eleven");
                                    break;
                            }
                        } else {
                            printf("Ten");
                            break;
                        }
                }
            }
    if (a[1] != 1 && a[0] > 0) {
        switch (a[0]) {
            case 9:
                printf("Nine");
                break;
            case 8:
                printf("Eight");
                break;
            case 7:
                printf("Seven");
                break;
            case 6:
                printf("Six");
                break;
            case 5:
                printf("Five");
                break;
            case 4:
                printf("Four");
                break;
            case 3:
                printf("Three");
                break;
            case 2:
                printf("Two");
                break;
            case 1:
                printf("One");
                break;
        }
    }
    return 0;
}
