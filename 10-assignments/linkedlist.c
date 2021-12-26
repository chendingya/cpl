//
// Created by 15845 on 2021/12/25.
//
#include <stdio.h>
#include <stdlib.h>

//struct
typedef struct node {
    int value;
    struct node *next;
    struct node *prev;
}Node;
typedef struct ll {
    Node *head;
    Node *tail;
} Linkedlist;

//function
void ADD(Linkedlist *list, int i);
void Forward( int num);
void Backward(int num);
void Insert(int num);
void Remove();
void Print();
void Init(Linkedlist *list);
int JudgeOrder();

//variable
char order[10];
Node *ptr;
Node *pre;
int count;

//main
int main (int argc, char *argv[]) {
    int n,t;
    int num;
    scanf("%d%d\n", &n, &t);
    //init
    Linkedlist list;//only contains Node *head / Node *tail
    Init(&list);
    //append
    for (int i = 1; i <= n; i++) {
        ADD(&list, i);
    }
    //pointers

    ptr = (list.head);
    count = n;

    //assess
    for (int i = 0; i < t; i++) {
        scanf("%s", &order);

        int judge = JudgeOrder(order);
        switch (judge) {
            case 1: scanf("%d", &num);Forward(num);break;
            case 2: scanf("%d", &num);Backward(num);break;
            case 3: scanf("%d", &num);Insert(num);count++;break;
            case 4: Remove();count--;break;
            case 5: Print();

                break;
            default:
                printf("Error default\n"); break;
        }
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
    node->prev = list->tail;

    if (list->tail == NULL) {
        //链表中没有节点
        list->head = node;
    } else {
        //有节点
        list->tail->next = node;
    }
    //调整尾指针
    list->tail = node;
    list->head->prev = node;
}
int JudgeOrder() {
    if (order[0] == 'F') {
        return 1;
    }
    if (order[0] == 'B') {
        return 2;
    }
    if (order[0] == 'I') {
        return 3;
    }
    if (order[0] == 'R') {
        return 4;
    }
    if (order[0] == 'P') {
        return 5;
    }
    return 6;
}
void Forward(int num) {
    int tmp = num % count;
    for (int i = 0; i < tmp; i++) {
        ptr = (*ptr).next;
    }
}
void Backward(int num) {
    int tmp = num % count;
    for (int i = 0; i < tmp; i++) {
        ptr = ptr->prev;
    }
}
void Insert(int num) {
    Node *node = malloc(sizeof (*node));
    node->value = num;
    node->prev = ptr;
    node->next = (*ptr).next;
    ptr->next->prev = node;
    (*ptr).next = node;
}
void Remove() {
    ptr->prev->next = ptr->next;
    ptr->next->prev = ptr->prev;
    ptr = ptr->next;

}
void Print() {
    int tmp = (*ptr).value;
    printf("%d\n", tmp);
}

