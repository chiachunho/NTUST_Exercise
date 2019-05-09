#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int n;

int f(int i) {
	int num;
	if (i == 0 || i == 1) {
		num = 1;
		return num;
	}
	else {
		num = f(i / 2) + f(i / 2 - 1);
		return num;
	}
}
int g(int i) {
	int num;
	if (i == 0 || i == 1 || i == 2) {
		num = i;
		return num;
	}
	else {
		num = g(i / 2) + g(i / 3);
		return num;
	}
}


int main() {
	while (scanf("%d", &n) != EOF) {
		if (n % 2 == 1) printf("(%d,%d,%d)\n", f(n), g(n), abs(f(n) - g(n)));
		else if (n % 2 == 0) printf("(%d,%d,%d)\n", f(n), g(n), abs(f(n) + g(n)));
	}
}