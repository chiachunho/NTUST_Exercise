#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr1[6];
	int arr2[6];
	while (scanf("%d", &arr1[0]) != EOF) {


		int all[10];
		int same[6];
		int a = 0, b = 0;
		int max;
		int m[5];

		for (int i = 1; i < 5; i++) scanf("%d", &arr1[i]);
		for (int i = 0; i < 5; i++) scanf("%d", &arr2[i]);

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5 - a; j++) {
				if (arr1[i] == arr2[j]) {
					same[a] = arr1[i];
					for (int k = j; k < 5; k++) {
						arr2[k] = arr2[k + 1];
					}
					a++;
				}
			}
		}

		for (int i = 0; i < 5; i++) all[i] = arr1[i];
		for (int i = 0; i < 5 - a; i++) all[i + 5] = arr2[i];
		int d = 0;
		printf(" Intersection is: { ");
		for (int i = 0; i < a; i++) {
			int min = same[0];
			for (int j = 0; j < a - b; j++) {
				if (same[j]<min) {
					min = same[j];

					d = j;
				}
			}
			b++;
			if (min == same[0]) d = 0;
			for (int k = d; k < a; k++) {
				same[k] = same[k + 1];
			}
			printf("%d ", min);
		}
		printf("}\n");

		b = 0;
		int c = 0;
		printf(" Union is: { ");
		for (int i = 0; i < 10 - a; i++) {
			int min = all[0];
			for (int j = 0; j < 10 - a - b; j++) {
				if (all[j]<min) {
					min = all[j];

					c = j;
				}
			}
			b++;
			if (min == all[0]) c = 0;
			for (int k = c; k<10 - a; k++) {
				all[k] = all[k + 1];
			}
			printf("%d ", min);
		}
		printf("}\n");
	}

}