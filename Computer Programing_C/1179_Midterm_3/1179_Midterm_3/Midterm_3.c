#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	while (scanf("%d", &num) != EOF) {
		int total = 0;
		int a = 1;
		for (int i = 1; i <= num; i++) {
			total = total + i;
		}
		//printf("%d", total);
		for (int i = 1; i <= num; i++) {
			for (int j = 1; j <= i; j++) {
				if (i == j) printf("%d\n", a);
				else printf("%d ", a);
				a++;
			}
		}

	}


}