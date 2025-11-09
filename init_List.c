#include <stdio.h>
#include "DDL.h"

void init_list(DLL* list) {
    char input[10];
    printf("Nhập các số nguyên (dừng với #):\n");
    while (1) {
        scanf("%s", input);
        if (input[0] == '#') break;
        int num = atoi(input);
        append(list, num);
    }
}



