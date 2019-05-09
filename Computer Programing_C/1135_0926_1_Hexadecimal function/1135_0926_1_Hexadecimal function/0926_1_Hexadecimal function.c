#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int x, y, f;

	while (scanf(" (%d , %d)", &x, &y) != EOF) {

		f = 2 * (x - y) + 5;
		printf("x = %.10d \" y = %.10d \" f(x,y) = %.10d\n", x, y, f);
		printf("x = 0x%.8x \" y = 0x%.8x \" f(x,y) = 0x%.8x\n\n", x, y, f);
		x = y = f = 0;
	}

	return 0;
}