#include <stdio.h>
#include "DDL.h"

void print_list(DLL* list) {
    Node* temp = list->head;
    while (temp) {
        printf("Giá trị: %d\n", temp->data);
        // printf("Địa chỉ: %p, Giá trị: %d\n", (void*)temp, temp->data);
        temp = temp->next;
    }
}
void print_List_Rev(DLL* list){
    Node* temp = list->tail;
    while (temp) {
        printf("Giá trị: %d\n", temp->data);
        // printf("Địa chỉ: %p, Giá trị: %d\n", (void*)temp, temp->data);
        temp = temp->prev;
    }
}