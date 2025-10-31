#ifndef DDL_H
#define DDL_H

typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

Node* create_node(int data);
void append(Node** head, int data);
void delete_node(Node** head, Node* node);
void free_list(Node* head);

#endif
