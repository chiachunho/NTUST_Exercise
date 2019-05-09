#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	while (scanf("%d", &num) != EOF) {
		int ans = 0;
		int x = 1;
		int cnt = 0;
		while ((num / 10) >= 0 && cnt<1) {
			ans = ans + (num % 10)*(x);
			x = x * 2;
			num = (num - (num % 10)) / 10;
			if (num == 0)cnt++;
		}
		printf("%d\n", ans);
	}
}