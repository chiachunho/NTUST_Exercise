#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ans, num, A = 0, B = 0, i;
	int a[3];
	int n[3];
	while (scanf("%d", &ans) != EOF) {
		scanf("%d", &num);
		a[0] = ans / 100;
		a[1] = (ans - (a[0] * 100)) / 10;
		a[2] = (ans - (a[0] * 100) - (a[1] * 10));
		if (a[0] > 9 || a[0] < 1) printf("3 digits please\n");
		else if (a[0] == a[1] || a[0] == a[2] || a[1] == a[2]) printf("Numbers can't be the same!\n");
		else {
			n[0] = num / 100;
			n[1] = (num - (n[0] * 100)) / 10;
			n[2] = (num - (n[0] * 100) - (n[1] * 10));
			if (n[0] > 9 || n[0] < 1) printf("3 digits please\n");
			else if (n[0] == n[1] || n[0] == n[2] || n[1] == n[2]) printf("Numbers can't be the same!\n");
			else {
				if (a[0] == n[0]) A++;
				if (a[1] == n[1]) A++;
				if (a[2] == n[2]) A++;
				if (n[0] == a[1] || n[0] == a[2]) B++;
				if (n[1] == a[0] || n[1] == a[2]) B++;
				if (n[2] == a[0] || n[2] == a[1]) B++;
				printf("Puzzle: %d\n", ans);
				printf("Answer: %d\n", num);
				printf("%dA%dB\n", A, B);
				A = 0;
				B = 0;
			}
		}
	}
	return 0;
}