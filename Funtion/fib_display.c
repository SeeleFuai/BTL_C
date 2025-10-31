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

void display_fibonacci(Node* head) {
    printf("Các số Fibonacci trong danh sách:\n");
    while (head) {
        if (is_fibonacci(head->data)) {
            printf("%d ", head->data);
        }
        head = head->next;
    }
    printf("\n");
}
