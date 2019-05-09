#include <stdio.h>
#include <stdlib.h>
#define M_PI 3.141592653589793

int main()
{
	double vol, r;
	while (scanf_s("%lf", &r) != EOF) {
	vol =r*r*r*M_PI*4/3;
	printf("%lf\n", vol);
	}
	return 0;
}