#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char in[150];
	char ans[10];
	while (scanf("%s", in) != EOF) {
		scanf("%s", ans);
		int cnt = 0;
		for (int i = 0; i < strlen(in); i++) {
			if (in[i] == ans[0]) {
				for (int j = i + 1; j < strlen(in); j++) {
					if (in[j] == ans[1]) {
						for (int k = j + 1; k < strlen(in); k++) {
							if (in[k] == ans[2]) {
								for (int m = k + 1; m < strlen(in); m++) {
									if (in[m] == ans[3]) cnt++;
								}
							}
						}
					}
				}
			}
		}
		printf("%d\n", cnt);		
	}
	return 0;
}
