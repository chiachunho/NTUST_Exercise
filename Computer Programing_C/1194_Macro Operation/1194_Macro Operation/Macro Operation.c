
#include <stdio.h>
#define NELEMS(a) (sizeof(a)/sizeof(a[0]))

int main(void)
{
	char cArry[11];
	int lliArry[22];
	double dArry[33];
	printf("%d\n", NELEMS(cArry));
	printf("%d\n", NELEMS(lliArry));
	printf("%d\n", NELEMS(dArry));
	return 0;
}