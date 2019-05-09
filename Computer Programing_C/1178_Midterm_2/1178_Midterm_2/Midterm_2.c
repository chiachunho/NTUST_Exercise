#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int rad(int, int);
bool same(int);

int main() {
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) {
		int save[100];
		int j = 0;
		for (int i = a; i <= b; i++) {
			if (same(i)) {
				save[j] = i;
				j++;
			}
		}
		for (int i = 0; i < j; i++) {
			if (i == 0) printf("%d", save[i]);
			else printf(", %d", save[i]);
		}
		printf("\n");

	}
}
int rad(int num, int a) {
	int i = 0;
	int ans = num;
	while (i < a - 1) {
		ans = ans*num;
		i++;
	}
	return ans;
}

bool same(int in) {
	int ans;
	int cnt = 0;
	int len = 0;
	int num = in;
	int total = 0;
	while ((num / 10) >= 0 && cnt<1) {
		ans = num % 10;
		num = (num - (num % 10)) / 10;
		if (num == 0)cnt++;
		len++;
	}
	num = in;
	cnt = 0;
	while ((num / 10) >= 0 && cnt<1) {
		ans = num % 10;
		num = (num - (num % 10)) / 10;
		total = total + rad(ans, len);
		if (num == 0)cnt++;
	}
	if (in == total) return true;
	else return false;
}