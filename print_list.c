#include <stdio.h>
#include "DDL.h"

void print_list(DLL* list) {
    Node* temp = list->head;
    while (temp) {
        printf("Địa chỉ: %p, Giá trị: %d\n", (void*)temp, temp->data);
        temp = temp->next;
    }
}
