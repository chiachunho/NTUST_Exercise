#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

unsigned int bit_32(unsigned int a, unsigned int b, unsigned int c, unsigned int d) {
	unsigned int value = a + b*(unsigned long long int)pow(16, 2) + c*(unsigned long long int)pow(16, 4) + d*(unsigned long long int)pow(16, 6);
	return value;
}

int main() {

	char in[500];
	while (gets(in)!= NULL) {
		char *pos = in;
		unsigned char val[512];
		for (int i = 0; i < strlen(in)/2; i++) {
			sscanf(pos, "%2hhX", &val[i]);
			pos += 2;
		}
		int header_len = val[0] + val[1] * 16 * 16;
		int key;
		char result_str[200] = { 0 };
		int p = 0;
		//int temp = 0;
		switch (in[11]) {
		case '1':
			header_len = header_len / 8;
			key = val[4];
			for (int i = header_len; i < strlen(in) / 2; i++) {
				result_str[p] = key^val[i];
				p++;
				//temp = key^val[i];
				//if (temp) printf("%c", temp);
			}
			break;
		case '2':
			header_len = header_len / 8;
			key = val[18];
			for (int i = header_len; i < strlen(in) / 2; i++) {
				key = key^val[i];
				//temp = key;
				//if (temp) printf("%c", temp);
				result_str[p] = key;
				p++;
			}
			break;
		case '3':
			header_len = header_len / 8;
			for (int i = header_len; i < strlen(in) / 2; i += 4) {
				unsigned long long int result = bit_32(val[i], val[i + 1], val[i + 2], val[i + 3]) + bit_32(val[16], val[17], val[18], val[19]);
				if (result >= 0x100000000) result -= 0x100000000;
				for (int j = 0; j < 4; j++) {
					unsigned long long int ch = result % 0x100;
					result_str[p] = ch;
					//temp = ch;
					//if (temp) printf("%c", temp);
					p++;
					result -= ch;
					result /= 0x100;
				}
			}
			break;
		}
		printf("%s\n",result_str);
	}
	return 0;
}
