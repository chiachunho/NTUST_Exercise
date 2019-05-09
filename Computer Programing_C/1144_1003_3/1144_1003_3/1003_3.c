#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a, b, c;
	int max, min, mid;
	while ((scanf("%d %d %d", &a, &b, &c)) != EOF)
	{
		printf("%d %d %d %d\n", a, b, c, abs(a - b) + abs(b - c));
		if (a > b && a > c) {
			max = a;
			if (b>c) {
				mid = b;
				min = c;
			}
			else {
				min = b;
				mid = c;
			}
		}
		else if (b > a && b > c) {
			max = b;
			if (a>c) {
				mid = a;
				min = c;
			}
			else {
				min = a;
				mid = c;
			}
		}
		else if (c > b && c > a) {
			max = c;
			if (b>a) {
				mid = b;
				min = a;
			}
			else {
				min = b;
				mid = a;
			}
		}
		printf("%d %d %d %d\n", max, mid, min, max - min);
	}
	return 0;

}