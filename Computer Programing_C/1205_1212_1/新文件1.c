#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void perm(char*, int, void(*)(char*));
void rotate(char*, int, int);
void copy(char*, char*);
void print(char*);

int N = 100;
int main() {

	char in[256];
	while (scanf("%s", in) != EOF) {
		char sort[256] = { 0 };
		N = strlen(in);
		for (int i = 0; i < N; i++) {
			char min=in[0];
			int p_min=0;
			for (int j = 0; j < strlen(in); j++) {
				if (min > in[j]) {
					min=in[j];
					p_min = j;
				}
			}
			for (int k = p_min; k < strlen(in); k++) {
				in[k] = in[k + 1];
			}
			sort[i]=min;
		}
		perm(sort, 0, print);
	}
	return 0;
}

void perm(char* num, int i, void(*take)(char*)) {
	if (i < N) {
		int j;
		for (j = i; j < N; j++) {
			char to[N];
			copy(num, to);
			rotate(to, i, j);
			perm(to, i + 1, take);
		}
	}
	else { take(num); }
}

void rotate(char* num, int i, int j) {
	char tmp = num[j];
	int k;
	for (k = j; k > i; k--) num[k] = num[k - 1];
	num[i] = tmp;
}

void copy(char* from, char* to) {
	int i;
	for (i = 0; i < N; i++) to[i] = from[i];
}

void print(char* num) {
	int i;
	for (i = 0; i < N; i++) printf("%c", num[i]);
	printf("\n");
}
