#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int  main() {

	char num[101];
	while (scanf("%s", num) != EOF) {
		char last = num[0];
		int i = 1;
		int cnt = 0;
		bool dan = false;
		while (num[i]) {
			if (num[i] == last) {
				cnt++;
			}
			else cnt = 0;
			last = num[i];
			i++;
			if (cnt >= 6) dan = true;
		}
		if (dan)printf("YES\n");
		else printf("NO\n");
	}

}