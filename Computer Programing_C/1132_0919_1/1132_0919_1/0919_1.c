#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a;
	while ((scanf("%f", &a)) != EOF) {
		printf("%.2f\n", a);
	}
	return 0;
}