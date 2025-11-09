#include "DDL.h"

void remove_duplicates(DLL* list) {
    for (Node* i = list->head; i; i = i->next) {
        Node* j = i->next;
        while (j) {
            Node* next = j->next;
            if (j->data == i->data) {
                delete_node(list, j);
            }
            j = next;
        }
    }
}
