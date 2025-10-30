#include <stdio.h>
#include <stdlib.h>

#include "DDL.h"
#include "function.h"

#include "DDL.c"
#include "init_List.c"
#include "check_prime.c"
#include "filter.c"
#include "sort.c"
#include "remove_dup.c"
#include "print_list.c"
#include "fib_display.c"



int main() {
    Node* head = NULL;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Khởi tạo danh sách\n");
        printf("2. Kiểm tra và xóa vị trí 5 nếu là số nguyên tố\n");
        printf("3. Tính tích các số chẵn, dương, chia hết cho 5\n");
        printf("4. Sắp xếp danh sách tăng dần\n");
        printf("5. Xóa phần tử trùng nhau\n");
        printf("6. In địa chỉ và giá trị\n");
        printf("7. Hiển thị số Fibonacci\n");
        printf("0. Thoát\n");
        printf("Chọn: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: init_list(&head); break;
            case 2: check_and_delete(&head); break;
            case 3: printf("Tích = %d\n", product_filtered(head)); break;
            case 4: sort_list(head); break;
            case 5: remove_duplicates(&head); break;
            case 6: print_list(head); break;
            case 7: display_fibonacci(head); break;
        }
    } while (choice != 0);

    free_list(head);
    return 0;
}
