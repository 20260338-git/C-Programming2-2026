#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void) {
    int number[SIZE];
    int total = 0;
    int max, min;
    double ave;

    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) {
        number[i] = rand() % 101;
    }

    for (int i = 0; i < SIZE; i++) {
        total += number[i];
    }

    max = number[0];
    min = number[0];

    for (int i = 1; i < SIZE; i++) {
        if (number[i] > max) {
            max = number[i];
        }

        if (number[i] < min) {
            min = number[i];
        }
    }

    ave = (double)total / SIZE;

    printf("학생별 점수\n");

    for (int i = 0; i < SIZE; i++) {
        printf("%3d ", number[i]);

        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    printf("\n최대값: %d\n", max);
    printf("최소값: %d\n", min);
    printf("평균: %.2f\n", ave);

    return 0;
}