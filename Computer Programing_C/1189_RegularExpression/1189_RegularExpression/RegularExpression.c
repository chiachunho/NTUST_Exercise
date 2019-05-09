#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 1024
int check(char*, char*);
int main() {

	char in[MAX] = {0};
	while (gets(in) != NULL) {
		// read data
		char *next;
		char data[MAX][600] = {0};
		next = strtok(in," ");
		int i = 0;
		while (next != NULL) {
			strcpy(data[i], next);
			next = strtok(NULL, " ");
			i++;
		}
		// input pattern
		int n=0;
		scanf("%d", &n);
		for (int m = 0; m < n; m++) {
			char pat[100] = {0};
			scanf(" %s", pat);
			char *ptr_pat = pat;
			int ans = 0;
			for (int j = 0; j < i; j++) {
				char *ptr_data = data[j];	
				do {
					if (check(ptr_data,ptr_pat)) {
						ans++;
						break;
					}
				} while (*(ptr_data += 1) != 0);
			}
			printf("%d\n", ans);
		}

	}
	return 0;
}

int check(char* data, char* pat) {

	char char_pat = *pat;
	if (!char_pat) return 1;
	char char_patn = *(pat + 1);
	int eat;
	switch (char_patn) {
	case 0:
		if (char_pat == *data) return 1;
		break;
	case '+':
		if (char_pat != *data) return 0;
		else {
			eat = 1;
			do {
				if (check(data + eat, pat + 2)) return 1;
			} while (char_pat == *(data + eat) && (++eat));
		}
		break;
	case '?':
		if (check(data, pat + 2)) return 1;
		else if (char_pat == *data) {
			if (check(data + 1, pat + 2)) return 1;
		}
		break;
	case'*':
		if (char_pat != *data) {
			if (check(data, pat + 2)) return 1;
		}
		else {
			eat = 0;
			do {
				if (check(data + eat, pat + 2)) return 1;
			} while (char_pat == *(data + eat) && (++eat));
		}
		break;
	default:
		if (char_pat == *data) {
			if (check(data + 1, pat + 1)) return 1;
		}
		break;
	}
	return 0;
}