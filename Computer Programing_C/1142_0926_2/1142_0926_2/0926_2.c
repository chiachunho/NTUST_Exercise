#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int a1, a2, a3, a4, a5, a6;
	int b1, b2, b3, b4, b5, b6;
	int c1, c2, c3, c4, c5, c6;

	while (scanf("%1d%1d%1d%1d%1d%1d %1d%1d%1d%1d%1d%1d %1d%1d%1d%1d%1d%1d", &a1, &a2, &a3, &a4, &a5, &a6, &b1, &b2, &b3, &b4, &b5, &b6, &c1, &c2, &c3, &c4, &c5, &c6) != EOF) {
		a1 = a1 + a2 + a3 + a4 + a5 + a6;
		a1 = a1 % 26;
		b1 = b1 + b2 + b3 + b4 + b5 + b6;
		b1 = b1 % 26;
		c1 = c1 + c2 + c3 + c4 + c5 + c6;
		c1 = c1 % 26;
		printf("%c%c%c\n", a1 + 65, b1 + 65, c1 + 65);

	}

	return 0;
}