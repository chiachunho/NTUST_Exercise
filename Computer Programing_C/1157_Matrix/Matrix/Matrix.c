#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[6][6] = {0};
	while (scanf("%d",&a[0][0]) != EOF) {
		scanf("%d %d %d %d", &a[0][1], &a[0][2], &a[0][3], &a[0][4]);
		for (int i = 1; i < 5; i++) {
			scanf("%d %d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3], &a[i][4]);
		}
		printf("Row totals:");
		for (int j = 0; j < 5; j++) {
			for (int i = 0; i < 5; i++) a[j][5] = a[j][5] + a[j][i];
			printf(" %d", a[j][5]);
		}
		printf("\nColumn totals:");
		for (int j = 0; j < 5; j++) {
			for (int i = 0; i < 5; i++) a[5][j] = a[5][j] + a[i][j];
			printf(" %d", a[5][j]);
		}
		printf("\n");
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 6; j++) a[i][j] = 0;
		}
	}
	return 0;
}