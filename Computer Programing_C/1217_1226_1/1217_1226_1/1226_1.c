#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
unsigned int transform(unsigned int n) {
	int zero = 0;
	int p = 0;
	for (int i = 0; i < 32; i++) {
		if (!zero) {
			if (n >> i & 1 == 1) {
				p = i;
				zero = 1;
			}
		}
		else break;
	}
	if (p % 2) n = n | (zero << (p-1) );
	else n = n | 1;
	return n;
}

int main() {

	unsigned int a,b;
	while (scanf("%u %u", &a,&b) != EOF) {
		unsigned int ans = transform(a) ^ transform(b);
		int cnt = 0;
		ans = ans & ~(1 << (cnt));
		for (int i = 31; i >= 0; i--) {
			if ((ans >> i) & 1) cnt++;
		}
		for (int i = 0; i < cnt; i++) {
			unsigned int temp = ans >> 31;
			ans <<= 1;
			ans |= temp;
		}
		if (ans >> 31) printf("red\n");
		if (ans & 1) printf("blue\n");
		if (!(ans >> 31) && !(ans & 1)) printf("black\n");
	}
	return 0;
}
