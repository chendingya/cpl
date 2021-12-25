//
// Created by 15845 on 2021/12/25.
//
#include <stdio.h>
#include "ll/ll.h"
#define NUM 10
void SitAroundCircle (Linkedlist *list, int num);
void KilUntilOne(Linkedlist *list);
int GetSurvivor(const Linkedlist *list);


int main (int argc, char *argv[]) {
    printf("josephus");
    Linkedlist list;
    Init(&list);
    SitAroundCircle(&list, NUM);
    Print(&list);
    KilUntilOne(&list);
    printf("%d: %d\n", NUM, GetSurvivor(&list));
    return 0;
}

void SitAroundCircle (Linkedlist *list, int num) {
    for (int i = 0; i < num; i++) {
        Append(list, i);
        //add i to its tail
    }
}

void KilUntilOne(Linkedlist *list) {
    Node *node = list->head;
    while (! IsSingleton(list)) {
        Delete(list, node);
        node = node->next;
    }
}
int GetSurvivor(const Linkedlist *list) {
    return HeadVal(list);
}
