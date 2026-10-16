#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int grade;
	printf("학년을 입력해주세요 : ");
	scanf("%d", &grade);

	if (grade == 1) {
		printf("1학년 입니다..\n");
	}
	else if (grade == 2) {
		printf("2하년 입니다.\n");
	}
	else if (grade == 3) {
		printf("3학년 입니다.\n");
	}
	else {
		printf("잘못된 입력입니다.");
	}

	return 0;
}