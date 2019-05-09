#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cnt = 0;
int fx(int);


int  main() {

	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) {
		int max = 0, tmp;
		for (int i = a; i <= b; i++) {
			tmp = fx(i);
			if (tmp > max) {
				max = tmp;
			}
			cnt = 0;
		}
		printf("%d %d %d\n", a, b, max);
	}

}
int fx(int n) {
	int num = n;
	if (num == 1) {
		cnt++;
		return cnt;
	}
	else {
		if (num % 2 == 0) {
			num = num / 2;
			cnt++;
		}
		else if (num % 2 == 1) {
			num = (num * 3) + 1;
			cnt++;
		}
		return fx(num);
	}
}