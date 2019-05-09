#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double x, y=1,z=1, a=0;
	while ((scanf("%lf", &x)) != EOF)
	{
		while (fabs(z - a) >= 0.00001) {
			z= x / y;
			a = (y + z) / 2;
			y = a;
		}
		printf("Square root: %.5f\n", y);
		y = 1;
		z = 1;
		a = 0;
	}

	return 0;
}

//squr()