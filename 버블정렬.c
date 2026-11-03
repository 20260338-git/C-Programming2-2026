#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void) {
    int score[SIZE];
    int sum = 0;
    int max, min;
    int temp;
    double average;

    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) {
        score[i] = rand() % 101;
    }

    for (int i = 0; i < SIZE; i++) {
        sum += score[i];
    }

    max = score[0];
    min = score[0];

    for (int i = 1; i < SIZE; i++) {
        if (score[i] > max) {
            max = score[i];
        }

        if (score[i] < min) {
            min = score[i];
        }
    }

    average = (double)sum / SIZE;

    printf("학생별 점수\n");

    for (int i = 0; i < SIZE; i++) {
        printf("%3d ", score[i]);

        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (score[j] < score[j + 1]) {
                temp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp;
            }
        }
    }

    printf("\n정렬 결과\n");

    for (int i = 0; i < SIZE; i++) {
        printf("%3d ", score[i]);

        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    printf("\n최대값: %d\n", max);
    printf("최소값: %d\n", min);
    printf("평균: %.2f\n", average);

    return 0;
}