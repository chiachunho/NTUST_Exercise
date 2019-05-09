#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a1,a2,a3,a4,a5,a6,b1,b2,b3,b4,b5,b6;
	int sum1, sum2;

	while (scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &b1,&a1,&b2,&a2,&b3,&a3,&b4,&a4,&b5,&a5,&b6,&a6) != EOF)
	{
		sum1 = a1 + a2 + a3 + a4 + a5 + a6;
		sum2 = b1 + b2 + b3 + b4 + b5 + b6;
		sum2 = sum2 + sum1 * 3 - 1;
		sum2 = sum2 % 10;
		sum2 = 9 - sum2;
		printf("%d\n", sum2);
	}
	return 0;

}