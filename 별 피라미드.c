#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exerc5(void)
{
    char star = '*';
    int line;

    printf("input line : ");
    scanf("%d", &line);

    for (int i = 0; i < line; i++) {
        int star_count = i * 2 + 1;

        for (int j = 0; j < star_count; j++)
            printf("%c", star);

        printf("\n");
    }
}

void printStar(void)
{
    int line;

    printf("input line : ");
    scanf("%d", &line);

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < line - i - 1; j++)
            printf(" ");

        for (int j = 0; j < i * 2 + 1; j++)
            printf("*");

        printf("\n");
    }
}

int main()
{
    printStar();
    return 0;
}