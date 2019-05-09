#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float i;
	double j;
	while ((scanf("%f", &i)) != EOF)
	{
		if (i >= 7000) {
			j = 230 + (i - 7000)*0.06;
			printf("%.2f\n", j);
		}
		else if (i >= 5250) {
			j = 142.5 + (i - 5250)*0.05;
			printf("%.2f\n", j);
		}
		else if (i >= 3750) {
			j = 82.5 + (i - 3750)*0.04;
			printf("%.2f\n", j);
		}
		else if (i >= 2250) {
			j = 37.5 + (i - 2250)*0.03;
			printf("%.2f\n", j);
		}
		else if (i >= 750) {
			j = 7.5 + (i - 750)*0.02;
			printf("%.2f\n", j);
		}
		else {
			j = i *0.01;
			printf("%.2f\n", j);
		}
	}
	return 0;

}