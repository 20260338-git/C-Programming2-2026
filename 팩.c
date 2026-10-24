#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exerc2(void)
{
    int n, result;

    result = 1;
    printf("input n : ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
        result *= i;

    printf("%d factorial = %d¿‘¥œ¥Ÿ.", n, result);
}

int main()
{
    exerc2();
    return 0;
}