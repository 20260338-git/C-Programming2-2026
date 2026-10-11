#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double cm;
	double kg;
	double total;

	scanf("%lf %lf", &cm, &kg);
	
	double m = cm / 100.0;

	 total = kg / (m * m);

	printf("BMI = %.2f\n",
		total);
	
	return 0;
}