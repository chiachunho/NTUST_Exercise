#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char in[256];
	while (scanf("%s", in) != EOF) {
		int i = 0, cnt = 0,space=0;
		int num[10] = {0};
		while (in[i]) {
			for (int j = 0; j < 10; j++) {
				if (in[i] == (48 + j)) num[j]++;
			}
			i++;
		}
		for (int k = 0; k < 10; k++) {
			if (num[k] > 1) {
				cnt++;
				if (space == 0) {
					printf("%d",k);
					space++;
				}
				else {
					printf(" %d", k);
				}
			}
		}
		if (cnt==0) printf("No repeated digit.");
		printf("\n");
	}
}