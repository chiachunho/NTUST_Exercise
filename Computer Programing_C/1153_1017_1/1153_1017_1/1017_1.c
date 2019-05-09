#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, cnt = 0;
	long long int c = 1;
	while ((scanf("%d %d", &a, &b)) != EOF)
	{
		switch (a) {
		case 0:
			if (b > 1 && b <= 10000) {
				for (int i = 2; i <= b; i++) {
					for (int j = 2; j < i; j++) {
						if (i%j == 0) {
							cnt++;
						}
					}
					if (cnt == 0) {
						printf("%d\n", i);
					}
					cnt = 0;
				}
			}
			break;
		case 1:
			if (b > 1 && b <= 20) {
				for (int i = 2; i <= b; i++) {
					for (int j = 2; j < i; j++) {
						if (i%j == 0) {
							cnt++;
						}
					}
					if (cnt == 0) {
						for (long long int k = 2; k <= i; k++) {
							c = c*k;
						}
						printf("%d! = %lld\n", i, c);
						c = 1;
					}
					cnt = 0;
				}
			}
			break;
		}
	}
	return 0;
}