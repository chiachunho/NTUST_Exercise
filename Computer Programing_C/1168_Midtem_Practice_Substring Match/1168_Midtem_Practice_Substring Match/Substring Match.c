#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int  main() {
	char str1[101];
	char str2[101];
	while (scanf("%s", str1) != EOF) {
		scanf("%s", str2);
		int max = 0;
		char tmp[100] = { 0 };
		char save[100] = { 0 };
		for (int i = 0; i < strlen(str1); i++) {
			for (int j = 0; j < strlen(str2); j++) {
				int a = i;
				int b = j;
				int cnt = 0;
				while (str1[a]) {
					if (str1[a] == str2[b]) {
						tmp[cnt] = str1[a];
						cnt++;
						a++;
						b++;
					}
					else break;
					if (cnt > max) {
						max = cnt;
						for (int k = 0; k < max; k++) save[k] = tmp[k];
					}
				}
			}
		}
		printf("%s\n", save);
	}
}