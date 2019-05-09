#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
typedef struct {
	char n[50];
}db;

int main() {
	db dict[40000] = { 0 };
	char in[50] = { 0 };
	int num = 0;
	while (scanf("%s", in)) {
		if (!strcmp("***", in)) break;
		else {
			strcpy(dict[num].n, in);
			num++;
		}
	}

	while (scanf("%s", in) != EOF) {
		printf("%s:", in);
		int cmp = 0;
		for (int i = 0; i < num; i++) {
			if (!strcmp(in, dict[i].n)) cmp = 1;
		}
		if (cmp) printf(" %s", in);
		else {
			for (int i = 0; i < strlen(in); i++) {
				for (int j = 0; j < num; j++) {
					if (strlen(in) == strlen(dict[j].n)) {
						int cnt = 0;
						for (int k = 0; k < strlen(in); k++) {
							if (k != i) {
								if (in[k] != dict[j].n[k]) cnt++;
							}
						}
						if (cnt == 0) printf(" %s", dict[j].n);
					}
				}
			}
		}
		printf("\n");
	}
	return 0;
}
