#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c, d, e;
	while (scanf("%d-%d-%d-%d-%d",&a,&b,&c,&d,&e ) != EOF )
	{
	printf("GSI prefix: %d\n", a);
	printf("Group identifier: %d\n", b);
	printf("Publisher code: %d\n", c);
	printf("Item number: %d\n", d);
	printf("Check bit: %d\n", e);
	}
	return 0;

}