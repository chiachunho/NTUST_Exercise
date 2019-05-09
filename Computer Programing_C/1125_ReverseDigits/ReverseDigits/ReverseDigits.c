#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	while (scanf("%d", &a) != EOF)
	{
		b = a % 10;
		a = a / 10;
		printf("%d%d\n", b, a);
	}
	return 0;

}