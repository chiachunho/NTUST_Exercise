#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int x, int y,int i) {
	if (i != 0) {
		int tmp;
		tmp = x + y;
		x = y;
		y = tmp;
		printf(" %d", tmp);
		i--;
		return fib(x, y, i);
	}
	else {
		printf("\n");
		return 1;
	}
}

int main() {
	int x, y,i;
	while (scanf("%d", &i) != EOF) {
		x = 0;
		y = 1;
		
		if (i == 0)
			printf("0\n");
		else if (i == 1)
			printf("0 1\n");
		else
		{
			i--;
			printf("0 1");
			fib(x, y, i);
		}
	}
	return 0;
}