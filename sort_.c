#include "DDL.h"

void swap_nodes(DLL* list, Node* a, Node* b) {

    Node* aPrev = a->prev;
    Node* aNext = a->next;
    Node* bPrev = b->prev;
    Node* bNext = b->next;
    
    // Nếu a và b liền kề
    if (a->next == b) {
        a->next = bNext;
        a->prev = b;
        b->next = a;
        b->prev = aPrev;
        if (aPrev) aPrev->next = b;
        if (bNext) bNext->prev = a;
    } 
    else 
    {
        // Hoán đổi con trỏ
        a->next = bNext;
        a->prev = bPrev;
        b->next = aNext;
        b->prev = aPrev;
        if (aPrev) aPrev->next = b;
        if (aNext) aNext->prev = b;
        if (bPrev) bPrev->next = a;
        if (bNext) bNext->prev = a;
    }

    // Cập nhật head và tail nếu có 
    if (list->head == a) list->head = b;
    else if (list->head == b) list->head = a;
    if (list->tail == a) list->tail = b;
    else if (list->tail == b) list->tail = a;
}


void sort_list_(DLL* list) {
    if (!list || !list->head) return;

    for (Node* i = list->head; i && i->next; i = i->next) {
        for (Node* j = i->next; j; j = j->next) {
            if (i->data > j->data) {
                swap_nodes(list, i, j);
                // Sau khi hoán đổi, i trỏ tới nút nhỏ hơn, cần quay lại để tiếp tục
                // Node* temp = i;
                // i = j;
                // j = temp;
            }
        }
    }
}

