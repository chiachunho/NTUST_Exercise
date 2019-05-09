#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char in[100];

int main() {

	while (scanf("%s", &in) != EOF) {
		int i = 0,j=0;
		char save[100] = {0};
		char one[300] = { 0 };
		char two[300] = { 0 };
		char three[300] = { 0 };
		while (in[i])
		{
			if (in[i] >= '0' && in[i] <= '9') {
				save[j] = in[i];
				switch (save[j])
				{
				case '0':case'2':case'3':case'5':case'6':case'7':case'8':case'9':
					one[j * 3] = ' ';
					one[j * 3 + 1] = '_';
					one[j * 3 + 2] = ' ';
					break;
				case '1':case '4':
					one[j * 3] = ' ';
					one[j * 3 + 1] = ' ';
					one[j * 3 + 2] = ' ';
					break;
				}
				switch (save[j])
				{
				case '1':case'7':
					two[j * 3] = ' ';
					two[j * 3 + 1] = ' ';
					two[j * 3 + 2] = '|';
					break;
				case'2':case'3':
					two[j * 3] = ' ';
					two[j * 3 + 1] = '_';
					two[j * 3 + 2] = '|';
					break;
				case '4':case'8':case'9':
					two[j * 3] = '|';
					two[j * 3 + 1] = '_';
					two[j * 3 + 2] = '|';
					break;
				case'0':
					two[j * 3] = '|';
					two[j * 3 + 1] = ' ';
					two[j * 3 + 2] = '|';
					break;
				case '5':case '6':
					two[j * 3] = '|';
					two[j * 3 + 1] = '_';
					two[j * 3 + 2] = ' ';
					break;
				}
				switch (save[j])
				{
				case '1':case'4':case'7':
					three[j * 3] = ' ';
					three[j * 3 + 1] = ' ';
					three[j * 3 + 2] = '|';
					break;
				case '2':
					three[j * 3] = '|';
					three[j * 3 + 1] = '_';
					three[j * 3 + 2] = ' ';
					break;
				case'3':case'5':case'9':
					three[j * 3] = ' ';
					three[j * 3 + 1] = '_';
					three[j * 3 + 2] = '|';
					break;
				case '6':case '8':case '0':
					three[j * 3] = '|';
					three[j * 3 + 1] = '_';
					three[j * 3 + 2] = '|';
					break;
				}
				j++;
			}
			i++;
		}
		printf("%s\n%s\n%s\n", one, two, three);
	}
	return 0;
}