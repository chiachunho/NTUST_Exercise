#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b;
	int i = 0;
	while ((scanf("%d %d", &a, &b)) != EOF) {
		a = a + b;
		for (int j = 0; j < a; j++) {
			printf(" ");
		}
		a = a + 65;
		printf("%c\n", a);
		a = 0;

	}
	return 0;
}