#include <string.h>
#include <stdlib.h>
#include <stdio.h>
//struct
typedef struct File{
    char name[100];
    char belong[100];
    struct File *next1;
    struct File *next2;
}file;

//function
void Insert(file *cur, char *target, char *newfilename);
void Remove(file *cur, char *target);
int query(file *cur);
void find(file *ptr, char *name);
//variable
int n,q;
int result[10011];
file *head;

int main () {
    scanf("%d %d\n", &n, &q);
    for (int i = 0; i < n; i++) {
        char *name = malloc(15);
        char *belong = malloc(15);
        scanf("%s %s", name, belong);

        if (!strcmp(belong, "~~~")) {
            file *node = malloc(sizeof *node);
            strcpy(node->name, name);
            strcpy(node->belong, belong);
            node->next1 = NULL;
            node->next2 = NULL;
            head = node;
        } else {
            Insert(head, belong, name);
        }

        free(name);
        free(belong);
    }
    for (int i = 0; i < q; i++) {
        char *request = malloc(7);
        char *name = malloc(15);
        scanf("%s %s", request, name);
        switch (request[0]) {
            case 'r':
                Remove(head, name);
                break;
            case 'q':
                find(head,name);

        }
        free(request);
        free(name);

    }
    return 0;
}
void find(file *ptr, char *name) {
    if (ptr == NULL) return;
    if (strcmp(ptr->name, name) == 0) {
        int tmp = query(ptr);
        printf("%d\n", tmp);
    }
    if (strcmp(ptr->name, name) != 0) {
        find(ptr->next1, name);
        find(ptr->next2, name);
    }

}


int query(file *cur) {
    if (cur == NULL) return 0;
    return 1 + query(cur->next1) + query(cur->next2);
}

void Insert(file *cur, char *belong, char *newfilename) {
    if (cur == NULL) return;
    if (strcmp(cur->name, belong) == 0) {
        file *node = malloc(sizeof *node);
        strcpy(node->name, newfilename);
        if (cur->next1 == NULL) {
            cur->next1 = node;
        } else {
            cur->next2 = node;
        }
        node->next1 = NULL;
        node->next2 = NULL;
        strcpy(node->belong, belong);
        return;
    }
    Insert(cur->next1, belong, newfilename);
    Insert(cur->next2, belong, newfilename);

}

void Remove(file *cur, char *target) {
    if (cur == NULL) return;
    if (cur->next1 != NULL && strcmp(cur->next1->name, target) == 0) {
        cur->next1 = NULL;
        return;
    }
    if (cur->next2 != NULL && strcmp(cur->next2->name, target) == 0) {
        cur->next2 = NULL;
        return;
    }
    Remove(cur->next1, target);
    Remove(cur->next2, target);

}