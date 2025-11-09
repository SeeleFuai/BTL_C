#include <stdio.h>
#include <stdlib.h>
#include "DDL.h"

DLL* create_List() {
    DLL* list = (DLL*)malloc(sizeof(DLL));
    list->head = NULL;
    list->tail = NULL;
    return list;
}

void append(DLL* list, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (list->head == NULL) {
        list->head = newNode;
        list->tail = newNode;
    } else {
        newNode->prev = list->tail;
        list->tail->next = newNode;
        list->tail = newNode;
    }
}

void delete_node(DLL* list,Node* node) {
    if (!list || !node) return;

    if (node->prev)// nếu như node này có phần tử đứng sau
        node->prev->next = node->next;
    else// node này là head
        list->head = node->next;

    if (node->next)// node này có ptu đứng trước
        node->next->prev = node->prev;
    else// node này là tail
        list->tail = node->prev;

    free(node);
}

void free_list(DLL* list) {
    Node* current = list->head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
    free(list);
}
