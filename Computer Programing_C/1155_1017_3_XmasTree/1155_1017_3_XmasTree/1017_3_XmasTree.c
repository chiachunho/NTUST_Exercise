#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void tree(int num) {
	switch (num) {
	case 1:
		printf("*\n");
		break;
	case 2:
		printf("*o*\n");
		break;
	default:
		printf("*o*");
		for (int i = 3; i < num; i++) {
			printf("**");
		}
		printf("o*\n");
	}
}
void space(int num) {

	for (int i = 0; i < num; i++) {
		printf(" ");
	}
}

int main()
{
	int a = 0, b = 0, c = 0, s;
	int ia, ib, ic;
	printf("Input each growth height of the 3 layers Xmas tree: ");
	while ((scanf("%d %d %d", &ia, &ib, &ic)) != EOF)
	{
		if ((a + ia) < 2 || (b + ib) < 2 || (c + ic) < 2) {
			printf("Invalid layer condition! Roll back to last status\n");
			printf("Heights of 3 layers: %d %d %d\n", a, b, c);
		}
		else {
			a = a + ia;
			b = b + ib;
			c = c + ic;
			printf("Heights of 3 layers: %d %d %d\n", a, b, c);
			s = a + b + c - 4;
			for (int i = 1; i <= a; i++) {
				space(s - i);
				tree(i);
			}
			for (int j = a - 1; j <= a + b - 2; j++) {
				space(s - j);
				tree(j);
			}
			for (int k = a + b - 3; k <= a + b + c - 4; k++) {
				space(s - k);
				tree(k);
			}
			if ((s - 1) == 1) {
				space(s - 1);
				printf("|\n");
			}
			else {
				space(s - 2);
				printf("| |\n");
			}


		}
		printf("Input each growth height of the 3 layers Xmas tree: ");
	}
	return 0;
}