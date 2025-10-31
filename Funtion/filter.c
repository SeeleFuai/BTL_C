#include <stdio.h>
#include "DDL.h"

int product_filtered(Node* head) {
    int product = 1;
    int found = 0;
    while (head) {
        if (head->data > 0 && head->data % 2 == 0 && head->data % 5 == 0) {
            product *= head->data;
            found = 1;
        }
        head = head->next;
    }
    return found ? product : 0;
}
