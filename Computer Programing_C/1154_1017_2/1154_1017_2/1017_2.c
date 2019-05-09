#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	unsigned long long c[256];
	c[0] = 0;
	while ((scanf("%d %d", &a, &b)) != EOF)
	{
		for (int i = 1; i <= b; i++) {
			scanf("%llu", &c[i]);
			c[0] = c[0] ^ c[i];
		}
		switch (a) {
		case 1:
			printf("%llu\n", ~c[0] & 255);
			break;
		case 2:
			printf("%llu\n", ~c[0] & 65535);
			break;
		case 4:
			printf("%llu\n", ~c[0] & 4294967295);
			break;
		case 8:
			printf("%llu\n", ~c[0] & 0xffffffffffffffff);
			break;
		}
		c[0] = 0;
	}
	return 0;
}