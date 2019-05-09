#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int table[500][500] = { 0 };
char strx[500];
char stry[500];
int range;

int findmin(int a, int b, int c) {
	int min;
	if (a < b) {
		if (a < c) min = a;
		else min = c;
	}
	else {
		if (b < c) min = b;
		else min = c;
	}
	return min;
}

int main() {
	while ((gets(strx)) != NULL) {
		gets(stry);
		if (strlen(strx) > strlen(stry)) range = strlen(strx);
		else range = strlen(stry);
		for (int i = 0; i <= range; i++) table[0][i] = i;
		for (int i = 0; i <= range; i++) table[i][0] = i;
		for (int i = 1; i <= range; i++) {
			for (int j = 1; j <= range; j++) {
				if (strx[i - 1] == stry[j - 1]) {
					table[i][j] = findmin(table[i - 1][j] + 1, table[i][j - 1] + 1, table[i - 1][j - 1]);
				}
				else table[i][j] = findmin(table[i - 1][j] + 1, table[i][j - 1] + 1, table[i - 1][j - 1] + 1);
			}
		}
		printf("Distance = %d\n", table[strlen(strx)][strlen(stry)]);
	}
	return 0;

}