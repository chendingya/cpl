/**
 * file: ll.h
 * It contains the declaration of types and functions.
 * do not contain implementation of the linked list.
 */
//
// Created by cdy on 2021/12/25.
//
#include <stdbool.h>

#ifndef C_PROJECT_LL_H
#define C_PROJECT_LL_H

typedef struct node {
    int value;
    struct node *next;
} Node;
typedef struct ll {
    Node *head;
    Node *tail;
} Linkedlist ;

void Init (Linkedlist *list);
void Print(Linkedlist *list);

bool IsEmpty(const Linkedlist *list);
bool IsSingleton(const Linkedlist *list);

int HeadVal (Linkedlist *link);
void Free(Linkedlist *list);
void Append(Linkedlist *list, int val);
void Delete(Linkedlist *list, Node *prev);
#endif //C_PROJECT_LL_H
