//
// Created by 15845 on 2021/12/27.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//struct
typedef struct node {
    char content[801];
    struct node *next;
}Node;
typedef struct ll {
    Node *head;
    Node *tail;
}Linkedlist;

//variable
int m,q;
Node *xiabiao[50000];
//functions
int hash(char *s);

void search(char *s, int hashret);
int main() {
    scanf("%d %d\n", &m, &q);
    char s[1001];
    for (int i = 0; i < 60001; i++) {
        xiabiao[i] = malloc(sizeof( Node));

        xiabiao[i]->next = NULL;
    }
    //
    for (int i = 0; i < m; i++) {
        scanf("%s\n", s);
        int hashret = hash(s);
        Node *ptr = xiabiao[hashret];
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        Node *node = malloc(sizeof *node);
        ptr->next = node;
        strcpy(node->content, s);
        node->next = NULL;
    }
    for (int i = 0; i < q; i++) {
        scanf("%s\n", s);
        int hashret = hash(s);
        search(s, hashret);

    }
    return 0;
}

//N是hash的范围

int hash(char *s){
    int len = strlen(s);
    int ret = 0;

    for(int i = 0; i < len; i++) {
        ret = (ret + s[i] * (i + 1) ) % 50000;
    }
    return ret;
}


void search(char *s, int hashret) {
    Node *p = xiabiao[hashret];
    int tmp = 0;
    while (p != NULL) {
        if (strcmp(s, p->content) == 0) {
            tmp = 1;
            break;
        }

        p = p->next;
    }
    if (tmp == 1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}