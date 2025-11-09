#include <stdio.h>
#include "DDL.h"

int product_filtered(DLL* list) {
    int product = 1;
    int found = 0;
    Node* current = list->head;
    while (current) {
        if (current->data > 0 && current->data % 2 == 0 && current->data % 5 == 0) {
            product *= current->data;
            found = 1;
        }
        current = current->next;
    }
    return found ? product : 0;
}
