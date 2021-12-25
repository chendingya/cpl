//
// Created by 15845 on 2021/12/23.
//
#include <stdio.h>
typedef struct musician {
    char *name;
    char gender;
    char *album;
    int c_score;
    int java_score;
    int python_score;
} Musician;

void PrintMusician(struct musician m);

int main () {
    Musician luo = {
            "Luo Dayou",
            'M',
            "之乎者也",
            0,10,20
    }
    Musician cui = {
            .name = "Cui Jian",
            .gender = 'M',
            .album = "新长征路上的摇滚",
            .c_score = 10, .java_score = 20, .python_score = 30
    };

    return 0;
}
/*
 * void PrintMusician(Musician m) {
    printf("%s\n%c\n%s\n%d\t%d\t%d\n",
           m.name,
           m.gender,
           m.album,
           m.c_score,
           m.java_score,
           m.python_score);
}

*/

void PrintMusician(Musician *m) {
    printf("%s\n%c\n%s\n%d\t%d\t%d\n",
           (*m).name,
           m->gender,
           m->album,
           m->c_score,
           m->java_score,
           m->python_score);
}