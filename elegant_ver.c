#include <stdio.h>
#include <stdlib.h>

#define N 15      // the number of nodes

struct Node{
    int val;
    struct Node *nxt;
}
typedef struct Node Node;

struct List{
    Node *head;
}
typedef struct List List;

Node **search(List *list, Node *target){
    Node **indirect = &list->head;
    while(*indirect && *indirect!=target){
        indirect = &(*indirect)->nxt;
    }
    return indirect;
}
