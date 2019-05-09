#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, fif, ten, one;
	while (scanf("%d", &num) != EOF) {
		if (num > 230) printf("exceed\n");
		else if (num / 50 >= 3) {
			num = num - 150;
			ten = num / 10;
			if (ten > 7) {
				one = num - 70;
				printf("%d*50 + %d*10 + %d\n", 3, 7, one);
			}
			else {
				one = num - (ten * 10);
				printf("%d*50 + %d*10 + %d\n", 3, ten, one);
			}
		}
		else if (num / 50 < 3) {
			fif = num / 50;
			num = num - (fif * 50);
			ten = num / 10;
			one = num - (ten * 10);
			printf("%d*50 + %d*10 + %d\n", fif, ten, one);
		}
	}
	return 0;
}