#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c, d;
	while ((scanf("%d", &a)) != EOF) {
		d = a / 50;
		a = a % 50;
		c = a / 10;
		a = a % 10;
		b = a / 5;
		a = a % 5;
		printf("%d %d %d %d\n", a, b, c, d);
	}
	return 0;
}