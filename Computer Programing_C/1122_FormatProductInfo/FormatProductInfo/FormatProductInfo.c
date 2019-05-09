#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	float b;
	char f[11];
	printf("Item No.\tUnit Price\tPurchase Date\n");

	while (scanf("%d %f %s", &a, &b, f) != EOF)
	{
		printf("%-8d\t$%9.2f\t%s\n", a, b,f);
	}
	return 0;

}