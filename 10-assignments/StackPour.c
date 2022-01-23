//
// Created by 15845 on 2021/12/26.
//
#include <stdlib.h>
#include <stdio.h>

//struct
typedef struct node {
    int value;
    struct node *next;
    struct node *prev;
} Node;
typedef struct ll {
    Node *head;
    Node *tail;
}Linkedlist;

//variables
int n;
int m;
int c;
int d;
Linkedlist list[1000005];
//function
void StackPour();
void Print();

int main(int argc, char *argv[]) {
    scanf("%d %d\n", &n, &m);
    //init

    for (int i = 1; i <= n; i++) {
        Node *node = malloc(sizeof (*node));
        if (node == NULL) {
            //内存分配失败
            printf("Error: malloc failed in Append()\n");
        } else {
            node->value = i;
            list[i].head = node;
            list[i].tail = node;
        }
    }
    //function

    for (int i = 0; i < m; i++) {
        scanf("%d %d\n", &c, &d);
        StackPour();
    }
    Print();

    return 0;
}
void StackPour() {
    if (list[c].head != NULL) {
        if (list[d].head == NULL) {
            list[d].head = list[c].head;
            list[d].tail = list[c].head;
            if (list[c].head != list[c].tail) {
                list[c].head = list[c].head->next;
            } else {//list[c].head == list[c].tail
                list[c].head = NULL;
                list[c].tail = NULL;
            }
            if (list[c].head != NULL) {
                while (list[c].head != list[c].tail) {
                    list[c].head = list[c].head->next;
                    list[c].head->prev->next = list[d].head;
                    list[d].head->prev = list[c].head->prev;
                    list[d].head = list[c].head->prev;
                }
                list[c].head->next = list[d].head;
                list[d].head->prev = list[c].head;
                list[d].head = list[c].head;
                list[c].head->prev = NULL;
                list[c].head = NULL;
                list[c].tail = NULL;
            }

        } else {
            while(list[c].head != list[c].tail) {
                list[c].head = list[c].head->next;
                list[c].head->prev->next = list[d].head;
                list[d].head->prev = list[c].head->prev;
                list[d].head = list[c].head->prev;

            }
            list[c].head->next = list[d].head;
            list[d].head->prev = list[c].head;
            list[d].head = list[c].head;
            list[c].head->prev = NULL;
            list[c].head = NULL;
            list[c].tail = NULL;
        }
    } else {//list[c]->head == NULL
        return;
    }
}
void Print() {
    for (int i = 1; i <= n; i++) {
        if (list[i].head == NULL) {
            printf("0\n");
        } else {
            Node *node = list[i].tail;
            while (node != list[i].head) {
                printf("%d ", node->value);
                node = node->prev;
            }
            printf("%d ", list[i].head->value);
            if (i != n) {
                printf("\n");
            }
        }
    }
}

