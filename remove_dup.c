#include "DDL.h"

void remove_duplicates(Node** head) {
    for (Node* i = *head; i; i = i->next) {
        Node* j = i->next;
        while (j) {
            Node* next = j->next;
            if (j->data == i->data) {
                delete_node(head, j);
            }
            j = next;
        }
    }
}
