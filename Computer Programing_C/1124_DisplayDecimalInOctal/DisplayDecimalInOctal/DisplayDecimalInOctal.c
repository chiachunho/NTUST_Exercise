#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	while (scanf("%d", &a) != EOF)
	{
		printf("%5.5o\n",  a);
	}
	return 0;

}