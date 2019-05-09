#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char in[150];
	while (gets(in) != NULL) {
		char *pch , *next;
		int value = 0;
		pch = strtok(in, " ");
		next = strtok(NULL, " ");
		value = atoi(next);
		next = strtok(NULL, " ");
		while (next != NULL) {
			if (strcmp(pch, "+") == 0) value += atoi(next);
			else if (strcmp(pch, "-") == 0) value -= atoi(next);
			else if (strcmp(pch, "*") == 0) value *= atoi(next);
			else if (strcmp(pch, "/") == 0) value /= atoi(next);
			next = strtok(NULL, " ");
		}
		printf("%d\n", value);
	}
	return 0;
}
