#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int num;
	float ans = 1.0;
	float a = 1;
	float b = 0;
	float i, j;
	while ((scanf("%d", &num)) != EOF)
	{
		for (i = 1; i <= num; i++) {
			a = 1;
			for (j = 1; j <= i; j++) {
				a = a*(1/j);
				//printf("%f\n", a);
			}
			ans = ans + a;
			a = 0;
		}
		printf("%.6f\n", ans);
		ans = 1.0;
	}
	return 0;

}