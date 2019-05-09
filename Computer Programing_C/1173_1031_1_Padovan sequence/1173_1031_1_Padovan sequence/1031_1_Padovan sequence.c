#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int i;

int pan(int n) {
	int num;
	if (n == 0 || n == 1 || n == 2) {
		num = 1;
		return num;
	}
	else {
		num = pan(n - 2) + pan(n - 3);
		return num;
	}

}

int main() {
	while (scanf("%d", &i) != EOF) {
		if (i > 2 && i < 31) {
			int j = 0;
			while (j < i) {
				printf("%d ", pan(j));
				j++;
			}
			while (j == i) {
				printf("%d\n", pan(j));
				j = 0;
			}
		}
		else printf("2<N<31\n");
	}
}