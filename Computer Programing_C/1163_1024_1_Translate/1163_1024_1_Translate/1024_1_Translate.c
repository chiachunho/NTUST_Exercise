#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char S[100];
	char T[100];
	while (scanf("%s", S) != EOF) {
		scanf("%s", T);
		int i = 0, cnt = 0, correct = 0;
		while (S[i] >= 97 && S[i] <= 122) {
			cnt++;
			i++;
		}
		for (int j = (cnt - 1), k = 0; j >= 0; j--, k++) {
			if (S[j] == T[k]) correct++;
		}
		if (cnt == correct) printf("YES\n");
		else if (cnt != correct) printf("NO\n");
	}
	return 0;
}