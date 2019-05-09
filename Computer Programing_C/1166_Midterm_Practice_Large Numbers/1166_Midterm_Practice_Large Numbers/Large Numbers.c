#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 1000

char result[MAX] = { 0 };

int main() {

	int in;
	while (scanf("%d", &in) != EOF) {
		result[0] = 1;
		char temp[MAX];
		for (int i = 1; i <= in; i++) {
			printf("int_%d\n", i);
			sprintf(temp, "%d", i);
			printf("%d_%s\n", strlen(temp),temp);
		}
		printf("\n");

	}
	return 0;
}

int main() {

	char a[MAX];
	char b[MAX];
	char result[MAX] = { 0 };
	char numa[MAX];
	char numb[MAX];
	scanf("%s", b);
	//invert to number
	for (int i = strlen(a) - 1, j = 0; i >= 0; i--, j++) numa[j] = a[i] - 48;
	for (int i = strlen(b) - 1, j = 0; i >= 0; i--, j++) numb[j] = b[i] - 48;
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
	for (int i = strlen(a) + strlen(b) - 2; i >= 0; i--) printf("%d", result[i]);
	printf("\n");
	return 0;
}
