#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exerc4(void)
{
    int sum = 0;
    double avg;
    int score;
    int i = 0;

    while (1) {
        printf("input score : ");
        scanf("%d", &score);

        if (score == -1) continue; //여기서 break 를 써야 올바른 코드가 되는 것이 아닌가 궁금해서 적어봅니다! 

        sum += score;
        i++;
        printf("run\n");
    }

    avg = sum / (double)i;
    printf("avg = %lf\n", avg);
}

int main()
{
    exerc4();
    return 0;
}