#include <stdio.h>
#include <stdlib.h>

#include "DDL.h"
#include "function.h"

#include "DDL.c"
#include "init_List.c"
#include "check_prime.c"
#include "filter.c"
#include "sort.c"
#include "sort_.c"
#include "remove_dup.c"
#include "print_list.c"
#include "fib_display.c"



int main() {
    DLL* list  = create_List();
    int choice;
    int choice_2;
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
            case 1: 
            {
                free_list(list);
                list = create_List();
                init_list(list); 
                print_list(list);
                break;
            }
            case 2: 
            {
                printf("Danh sách hiện tại:\n");
                print_list(list);
                check_and_delete(list);
                printf("Danh sách sau khi kiểm tra và xóa:\n");
                print_list(list); 
                break;
            }
            case 3: 
            {
                printf("Danh sách hiện tại:\n");
                print_list(list);
                printf("Tích = %d\n", product_filtered(list)); 
                break;
            }
            case 4: 
            {
                do
                {
                    printf("1.Sắp xếp theo giá trị\n");
                    printf("2.Sắp xếp theo Node\n");
                    printf("0.Quay lại\n");
                    printf("Chọn: ");
                    scanf("%d", &choice_2);
                    switch (choice_2)
                    {
                    case 1:
                        printf("Danh sách hiện tại:\n");
                        print_list(list);
                        sort_list(list); 
                        printf("Danh sách sau khi sắp xếp:\n");
                        print_list(list);
                        break;
                    case 2:
                        printf("Danh sách hiện tại:\n");
                        print_list(list);
                        sort_list_(list); 
                        printf("Danh sách sau khi sắp xếp:\n");
                        print_list(list);
                    }
                } while(choice_2!=0);
                break;
            }
            case 5: 
            {
                printf("Danh sách hiện tại:\n");
                print_list(list);
                remove_duplicates(list); 
                printf("Danh sách sau khi xóa phần tử trùng nhau:\n");
                print_list(list);
                break;
            }
            case 6: print_list(list); break;
            case 7: display_fibonacci(list); break;
        }
    } while (choice != 0);

    free_list(list);
    return 0; 
}
