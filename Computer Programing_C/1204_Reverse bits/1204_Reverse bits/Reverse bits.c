#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned int reverse_bits(unsigned int n) {
	unsigned int result = 0;
	int num = 0;
	int bit = 0;
	while (num <32){
		bit = n & 1;
		n >>= 1;
		result += bit << (31 - num);
		num++;
	}
	return result;
}

int main() {

	unsigned int in;
	while (scanf("%u", &in) != EOF) {
		unsigned int value = reverse_bits(in);
		for (int i = 31; i >=0; i--) {
			printf("%d", (value >> i)&1);
		}
		printf("\n");
	}
	return 0;
}

