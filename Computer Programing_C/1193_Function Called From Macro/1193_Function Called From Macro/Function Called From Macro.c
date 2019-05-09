
#include <stdio.h>
#include <math.h>
#define DISP(a,b) printf(#a"(%g) = %g\n", b, a(b))

int main(void)
{
	DISP(sqrt, 100.0);
	DISP(sin, 10.0 * 0.0);
	DISP(cos, 0.0 / 1000.0);
	DISP(sin, 3 + 0.1415926);
	DISP(cos, 3 + 0.1415926);
	return 0;
}