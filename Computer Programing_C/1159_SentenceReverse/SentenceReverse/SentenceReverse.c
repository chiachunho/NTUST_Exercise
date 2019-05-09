#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	char str[100][100];
	int i = 0,j=0,fin;
	while (scanf("%s", str[i]) != EOF) {
		while (str[i][j]) {
			if ((str[i][j] == '?') || (str[i][j] == '!') || (str[i][j] == '.')) {
				fin = str[i][j];
				str[i][j] = 0;
				for (int k = i; k >= 0; k--) {
					if (k != 0) printf("%s ", str[k]);
					else {
						printf("%s%c\n", str[k], fin);
						i = -1;
					}
				}
			}
			j++;
		}
		j = 0;
		i++;
	}
	return 0;
}
