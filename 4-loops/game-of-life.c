//
// Created by 15845 on 2021/11/11.
//
#include <stdio.h>
#include <unistd.h>

#define ROUND 10
#define SIZE 6
int board[SIZE][SIZE] = {
        {0},
        {0},
        {0, 0, 1, 1, 1, 0},
        {0, 1, 1, 1, 0, 0},
        {0},
        {0}};

int main(){
    int old_board[SIZE + 2][SIZE + 2];
    for (int row = 0; row < SIZE + 2; row++) {
        for (int col = 0; col < SIZE + 2; col++) {
            if (row == 0 || row == SIZE + 1 || col == 0 || col == SIZE + 1) {
                old_board[row][col] = 0;
            } else {
                old_board[row][col] = board[row - 1][col - 1];
            }
        }
    }

    for (int row = 1; row < SIZE + 1; row++) {
        for (int col = 1; col < SIZE + 1; col++) {
            printf("%c ", old_board[row][col] ? '*' : ' ');
        }
        printf("\n");
    }

 //int new_board[SIZE + 2][SIZE + 2];
    //    for (int i = 1; i < SIZE + 1; i++){
    //        for (int j = 1; j < SIZE + 1; j++) {
    //            int neighbours = old_board[i - 1][j - 1]
    //                + old_board[i - 1][j]
    //                + old_board[i - 1][j + 1]
    //                + old_board[i][j - 1]
    //                + old_board[i][j + 1]
    //                + old_board[i + 1][j - 1]
    //                + old_board[i + 1][j]
    //                + old_board[i + 1][j + 1];
    //            if (old_board[i][j] && (neighbours = 2 || neighbours == 3)) {
    //                new_board[i][j] = 1;
    //            } else {
    //                new_board[i][j] = 0;
    //            }
    //            /**
    //             * simplified:
    //             * new_board[i][j] =
    //                   old_board[i][j] && (neighbours = 2 || neighbours == 3)
    //             */
    //             new_board[i][j] =
    //                     !old_board[i][j] && neighbours == 3;
    //             /**
    //              * all-simplified:
    //              * new_board[i][j] =
    //                   (old_board[i][j] && (neighbours = 2 || neighbours == 3))
    //                   || !old_board[i][j] && neighbours == 3;
    //              */
    //        }
    //    }
    //
    //    for (int i = 1; i < SIZE + 1; i++) {
    //        for (int j = 1; j < SIZE + 1; j++) {
    //            printf("%c", old_board[i][j] ? '*' : ' ');
    //        }
    //        printf("\n");
    //    }


    /**
   * generate the next-round board
   */
    int new_board[SIZE + 2][SIZE + 2];

    for (int round = 0; round < ROUND; round++) {
        for (int row = 1; row < SIZE + 1; row++) {
            for (int col = 1; col < SIZE + 1; col++) {
                int neighours = old_board[row - 1][col - 1]
                                + old_board[row - 1][col]
                                + old_board[row - 1][col + 1]
                                + old_board[row][col - 1]
                                + old_board[row][col + 1]
                                + old_board[row + 1][col - 1]
                                + old_board[row + 1][col]
                                + old_board[row + 1][col + 1];

                new_board[row][col] =
                        (old_board[row][col] && (neighours == 2 || neighours == 3))
                        || (!old_board[row][col] && neighours == 3);
            }
        }

        for (int row = 1; row < SIZE + 1; row++) {
            for (int col = 1; col < SIZE + 1; col++) {
                printf("%c ", new_board[row][col] ? '*' : ' ');
            }
            printf("\n");
        }
    }

    //sleep(1);
    /**
     * Work only in Linux
     * Windows: clrscr(); (#include <conio.h>)
     */
    printf("\033c");

    /**
     * copy board
     */
    for (int row = 0; row < SIZE + 2; row++) {
        for (int col = 0; col < SIZE + 2; col++) {
            old_board[row][col] = new_board[row][col];
        }
    }




    return 0;
}
