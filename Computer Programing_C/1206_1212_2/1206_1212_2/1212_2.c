#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

long long int bit_32(unsigned char a, unsigned char b, unsigned char c, unsigned char d) {
	long long int value = a + b*(long long int)pow(16, 2) + c*(long long int)pow(16, 4) + d*(long long int)pow(16, 6);
	return value;
}

int main() {

	char in[500];
	while (gets(in) != NULL) {
		char *pos = in;
		unsigned char val[100];
		char str[100][10] = { 0 };
		for (int i = 0; i < strlen(in) / 2; i++) {
			sscanf(pos, "%2hhX", &val[i]);
			sscanf(pos, "%2c", &str[i]);
			pos += 2;
		}
		int header_len = val[0] + val[1] * 16 * 16;
		int key;
		int temp = 0;
		switch (in[11]) {
		case '1':
			header_len = header_len / 8;
			key = val[4];
			for (int i = header_len; i < strlen(in) / 2; i++) {
				temp = key^val[i];
				if (temp) printf("%c", temp);
			}
			break;
		case '2':
			header_len = header_len / 8;
			key = val[18];
			for (int i = header_len; i < strlen(in) / 2; i++) {
				key = key^val[i];
				temp = key;
				if (temp) printf("%c", temp);
			}
			break;
		case '3':
			header_len = header_len / 8;
			int total_len= val[6] + val[7] * 16 * 16;
			printf("%d", total_len);
			for (int i = header_len; i < strlen(in) / 2; i += 4) {
				long long int result = bit_32(val[i], val[i + 1], val[i + 2], val[i + 3]) + bit_32(val[16], val[17], val[18], val[19]);
				if (result >= 0x100000000) result -= 0x100000000;
				for (int j = 0; j < 4; j++) {
					long long int ch = result % 0x100;
					temp = ch;
					if (temp) printf("%c", temp);
					result -= ch;
					result /= 0x100;
				}
			}
			break;
		}
		printf("\n");
	}
	return 0;
}
