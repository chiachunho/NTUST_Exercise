#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {

	char in[500];
	while (gets(in) != NULL) {
		int a, b;
		char trash[100];
		int value = sscanf(in, "%i %i %s", &a, &b, trash);
		bool comma = false;
		if (value == 2 && a >= 0 && b >= 0) {
			for (int i = a; i <= b; i++) {
				int cnt = 0;
				for (int j = 1; j < i; j++) {
					if (i%j == 0) cnt++; 
					if (cnt > 1) break;
				}
				if (cnt == 1) {
					if (!comma) {
						printf("%d", i);
						comma = true;
					}
					else printf(", %d", i);
					
				}
			}
		}
		else printf("Invalid input!");
		printf("\n");
	}
	return 0;
}