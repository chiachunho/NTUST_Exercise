#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char in[30];
	while (scanf("%s", in) != EOF) {
		char max[30];
		char min[30];
		strcpy(max,in);
		strcpy(min, in);
		if (strlen(in) != 4) {
			while (scanf("%s", in)) {
				if (strcmp(in, max) > 0) strcpy(max, in);
				else if (strcmp(min, in) > 0) strcpy(min, in);
				if (strlen(in) == 4) break;
			}
		}
		printf("%s %s\n", min, max);
	}
	return 0;
}
