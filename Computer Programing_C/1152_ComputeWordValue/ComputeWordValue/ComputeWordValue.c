#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {
	char in[256];

	while (scanf("%s", in) != EOF) {
		int i = 0, j, cnt = 0;
		while (in[i]) {
			in[i] = toupper(in[i]);
			switch (in[i]) {
			case 'A':case 'E':case 'I':case'L':case'N':case 'O':case 'R':case 'S':case 'T':case 'U':
				cnt++;
				break;
			case 'D':case 'G':
				cnt += 2;
				break;
			case 'B':case 'C':case'M':case'P':
				cnt += 3;
				break;
			case 'F':case 'H':case'V':case'W':case'Y':
				cnt += 4;
				break;
			case'K':
				cnt += 5;
				break;
			case 'J':case 'X':
				cnt += 8;
				break;
			case 'Q':case 'Z':
				cnt += 10;
				break;
			}
			i++;
		}
		printf("Scrabble Value: %d\n", cnt);
	}
}