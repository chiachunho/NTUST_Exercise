#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i;
	int num[100];
	int only[100];
	while (scanf("%d", &i) != EOF) {
		int cnt = 0, k = 0;
		for (int j = 0; j < i; j++) scanf("%d", &num[j]);
		for (int j = 0; j < i; j++) {
			for (int k = 0; k < j; k++) {
				if (num[j] == num[k]) cnt++;
			}
			if (cnt == 0) {
				only[k] = num[j];
				k++;
			}
			cnt = 0;
		}
		for (int j = 0; j < k; j++) {
			if (j != (k - 1)) printf("%d ", only[j]);
			else printf("%d\n", only[j]);
		}
	}
	return 0;
}