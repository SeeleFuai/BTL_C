#include <stdio.h>
#include "DDL.h"

int is_fibonacci(int n) {
    int a = 0, b = 1;
    while (b < n) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b == n || n == 0;
}

void display_fibonacci(DLL* list) {
    printf("Các số Fibonacci trong danh sách:\n");
    Node* temp = list->head;
    while (temp) {
        if (is_fibonacci(temp->data)) {
            printf("%d ", temp->data);
        }
        temp = temp->next;
    }
    printf("\n");
}
