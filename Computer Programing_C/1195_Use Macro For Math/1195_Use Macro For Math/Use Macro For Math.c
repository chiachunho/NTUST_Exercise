
#include <stdio.h>
#include <math.h>
#define CHECK(x,y,z) ((x>0 && x<(z-1) && y>0 && y<(z-1))?1:0)
#define MEDIAN(x,y,z) ((x+y+z)/3.0)
#define POLYNOMIAL(x) (3*(int)pow(x,5)+2*(int)pow(x,4)-5*(int)pow(x,3)-(int)pow(x,2)+(int)7*(x)-6)

int main(void)
{
	printf("%d\n", CHECK(1 * 8, 2 + 9, 3 / 2));
	printf("%d\n", CHECK(3 + 8, 2 + 3, 6 + 21 + 2));
	printf("%g\n", MEDIAN(1 + 6, 25, 3 + 2));
	printf("%g\n", MEDIAN(1 + 1, 2 + 2.3, 3 + 4.2));
	printf("%d\n", POLYNOMIAL(5 + 1 - 1 * 1));
	printf("%d\n", POLYNOMIAL(4 + 1));
	return 0;
}