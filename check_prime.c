#include <math.h>
#include "DDL.h"

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0;
    return 1;
}

void check_and_delete(Node** head) {
    Node* temp = *head;
    for (int i = 1; i < 5 && temp; i++)
        temp = temp->next;
    if (temp && is_prime(temp->data)) {
        delete_node(head, temp);
    }
}
