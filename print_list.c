#include <stdio.h>
#include "DDL.h"

void print_list(Node* head) {
    while (head) {
        printf("Địa chỉ: %p, Giá trị: %d\n", (void*)head, head->data);
        head = head->next;
    }
}
