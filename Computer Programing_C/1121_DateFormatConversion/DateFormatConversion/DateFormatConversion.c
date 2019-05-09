#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	while (scanf("%d/%d/%d", &a, &b, &c) != EOF)
	{
		printf("%4.4d%2.2d%2.2d\n", c,a,b);
	}
	return 0;

}