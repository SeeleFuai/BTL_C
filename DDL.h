#ifndef DDL_H
#define DDL_H

typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

typedef struct DLL {
    Node* head;
    Node* tail;
} DLL;

DLL* create_List();
void append(DLL* list, int data);
void delete_node(DLL*list, Node* node);
void free_List(DLL* list);
void print_List(DLL* list);
#endif
