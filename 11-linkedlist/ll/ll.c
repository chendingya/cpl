/**
 * file : ll.c
 * It contains the implementation of the linked list.
 */

#include "ll.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void Init(Linkedlist *list){
    list->head = NULL;
    list->tail = NULL;
}

bool IsEmpty(const Linkedlist *list) {
    return list->head == NULL;
}
bool IsSingleton(const Linkedlist *list) {
    return !IsEmpty(list) && (list->head == list->tail);
}
int HeadVal (Linkedlist *link) {
    return link->head->value;
}

void Append(Linkedlist *list, int val) {
    Node *node = malloc(sizeof (*node));
    if (node == NULL) {
        printf("Error:malloc failed in Append\n");
        return;
    }
    node->value = val;

    if (list->tail == NULL) {
        list->head = node;
    } else {
        list->tail->next = node;
    }
    //xunhuan list
    list->tail = node;
    node->next = list->head;

}

void Delete(Linkedlist *list, Node *prev) {
    Node *cur = prev->next;
    Node *next = cur->next;
    prev->next = next;
    if (cur == list->head) {
        list->head = next;
    }
    if (cur == list->tail) {
        list->tail = prev;
    }
    if (cur == prev) {
        list->head = NULL;
        list->tail = NULL;
    }
    free(cur);
}

void Print(Linkedlist *list) {
    if (IsEmpty(list)) {
        return;
    }

    Node *iter = list->head;
    do {
        printf("%d\t", iter->value);
        iter = iter->next;
    } while (iter != list->head);
}

