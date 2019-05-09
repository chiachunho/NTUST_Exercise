#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c,d;
	int max, min;
	while ((scanf("%d%d%d%d", &a,&b,&c,&d)) != EOF)
	{
		max = a;
		min = a;
		if (b > max) max = b;
		else if (b<min) min = b;
		if (c > max) max = c;
		else if (c < min) min = c;
		if (d > max) max = d;
		else if (d < min) min = d;
		printf("Largest: %d\n", max);
		printf("Smallest: %d\n", min);

	}
	return 0;

}