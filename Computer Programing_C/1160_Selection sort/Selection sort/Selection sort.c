#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int findmin(int a[], int len) {
	int min = a[0];
	for (int i = 0; i < len; i++) {
		if (a[i] < min) min = a[i];
	}
	return min;
}

int main() {
	int i, min = 0, tmp;
	int num[100], sort[100];
	while (scanf("%d", &i) != EOF) {
		for (int j = 0; j < i; j++) scanf("%d", &num[j]);
		for (int j = 0; j < i; j++) {
			min = findmin(num, i - j);
			for (int k = 0; k < i; k++) {
				if (min == num[k]) {
					for (int ar = k; ar < i; ar++) num[ar] = num[ar + 1];
					sort[j] = min;
					break;
				}
			}
		}
		for (int j = i - 1; j >= 0; j--) {
			if (j != 0) printf("%d ", sort[j]);
			else printf("%d\n", sort[j]);
		}
	}
	return 0;
}