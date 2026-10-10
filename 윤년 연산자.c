#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int year;
    scanf("%d", &year);

    printf("%d\n", (year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

    return 0;
}