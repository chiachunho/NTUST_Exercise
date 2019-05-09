#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 1024

int main() {

	int max;
	while (scanf("%d", &max) != EOF) {
		unsigned long long array_value[MAX] = {0};
		int index;
		char type[10];
		char array_type[MAX][10] = {""};
		int in_times;
		int out_times;
		scanf("%d", &in_times);
		for (int i = 0; i < in_times; i++) {
			scanf("%d %s", &index, type);
			strcpy(array_type[index], type);
			if (!strcmp(type, "char")) scanf("%uc", &array_value[index]);
			else if (!strcmp(type, "short")) scanf("%d", &array_value[index]);
			else if (!strcmp(type, "int")) scanf("%d", &array_value[index]);
			else if (!strcmp(type, "long")) scanf("%*s %lld", &array_value[index]);
			else if (!strcmp(type, "double")) scanf("%lf", &array_value[index]);
		}
		scanf("%d", &out_times);
		for (int i = 0; i < out_times; i++) {
			scanf("%d", &index);
			if (!strcmp(array_type[index], "char")) {
				for (int p = 7; p >= 0; p--) printf("%d", (array_value[index] >> p) % 2);
			}
			else if (!strcmp(array_type[index], "short")) {
				for (int p = 15; p >= 0; p--) printf("%d", (array_value[index] >> p) % 2);
			}
			else if (!strcmp(array_type[index], "int")) {
				for (int p = 31; p >= 0; p--) printf("%d", (array_value[index] >> p) % 2);
			}
			else if (!strcmp(array_type[index], "long")) {
				for (int p = 63; p >= 0; p--) printf("%d", (array_value[index] >> p) % 2);
			}
			else if (!strcmp(array_type[index], "double")) {
				for (int p = 63; p >= 0; p--) printf("%d", (array_value[index] >> p) % 2);
			}
			else printf("0");
			printf("\n");
		}
	}
	return 0;
}
