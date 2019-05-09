#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {

	char a[1000];
	char b[1000];
	while (scanf("%s", a) != EOF) {
		char result[1000] = { 0 };
		char numa[1000];
		char numb[1000];
		scanf("%s", b);
		//invert to number
		for (int i = strlen(a) - 1,j=0; i >= 0; i--,j++) numa[j] = a[i] - 48;
		for (int i = strlen(b) - 1, j = 0; i >= 0; i--,j++) numb[j] = b[i] - 48;
		//calculate
		for (int i = 0; i <strlen(a); i++) {
			for (int j = 0; j < strlen(b); j++) {
				result[i + j] = result[i + j] + (numa[i] * numb[j]);
				if (result[i + j] >= 10) {
					result[i + j + 1] = result[i + j + 1] + (result[i + j] / 10);
					result[i + j] = result[i + j] % 10;
				}
			}
		}
		//print result
		if (result[strlen(a) + strlen(b) - 1] != 0) printf("%d", result[strlen(a) + strlen(b) - 1]);
		for (int i = strlen(a)+strlen(b)-2; i >= 0; i--) printf("%d", result[i]);
		printf("\n");
	}
	return 0;
}
