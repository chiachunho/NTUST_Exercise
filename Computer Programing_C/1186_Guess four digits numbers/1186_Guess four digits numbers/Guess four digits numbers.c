#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int in[5];
	while (scanf("%1d%1d%1d%1d", &in[0], &in[1], &in[2], &in[3]) != EOF) {
		int ans[5];
		int a = 0, b = 0;
		scanf("%1d%1d%1d%1d", &ans[0], &ans[1], &ans[2], &ans[3]);
		for (int i = 0; i < 4; i++) {
			if (in[i] == ans[i]) a++;
			for (int j = 0; j < 4; j++) {
				if (in[i] == ans[j]) b++;
			}
		}
		printf("%dA%dB\n", a, b - a);
	}
	return 0;
}