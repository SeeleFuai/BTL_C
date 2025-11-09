#include "DDL.h"

void sort_list(DLL* list) {
    for (Node* i = list->head; i && i->next; i = i->next) {
        for (Node* j = i->next; j; j = j->next) {
            if (i->data > j->data) {
                int temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}
