//
// Created by 15845 on 2021/12/25.
//
#include <stdio.h>
#include <stdlib.h>

//struct
typedef struct node {
    int value;
    struct node *next;
}Node;
typedef struct ll {
    Node *head;
    Node *tail;
} Linkedlist ;

//function
void ADD(Linkedlist list, int i);
void PRINT(Linkedlist *list, int cur);
void Init(Linkedlist *list);
//main


int main (int argc, char *argv[]) {
    int n,t;
    scanf("%d%d\n", &n, &t);
    //init
    Linkedlist list;//only contains Node *head / Node *tail
    Init(&list);
    //append
    for (int i = 1; i <= n; i++) {
        ADD(list, i);
    }
    //print to check
    for (i = first; i != NULL; i = i->next) {
        printf("%d\t", i->value);
    }

    return 0;
}

//implementation
void Init(Linkedlist *list) {
    list->head = NULL;
    list->tail = NULL;
}
void ADD(Linkedlist *list, int i) {
    Node *node = malloc(sizeof *node);//node是链表中的一个节点
    if (node == NULL) {
        //内存分配失败
        printf("Error: malloc failed in Append()\n");
        return;
    }
    node->value = i;
    //首尾相连
    node->next = list->head;

    if (list->tail == NULL) {
        //链表中没有节点
        list->head = node;
    } else {
        //有节点
        list->tail->next = node;
    }
    //调整尾指针
    list->tail = node;
}
void PRINT(Linkedlist *list, int cur) {

}

