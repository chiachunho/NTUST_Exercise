#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {

	int n;
	while (scanf("%d", &n) != EOF) {
		int list_order[39] = { 0 };
		int cnt = 0;
		int people = 0;
		int num_order = 1;
		int i = 1;
		bool check[39] = { false };
		while (cnt < n && list_order[38]==0) {
			if (people == 38) people = 1;
			else people++;
			while (check[people]) {
				if (people == 38) people = 0;
				people++;
			}
			cnt++;
			if (cnt == n) {
					list_order[i] = people;
					check[people] = true;
					i++;
					cnt = 0;
			}
		}
		for (int j = 1; j <= 38; j++) {
			for (int k = 1; k <= 38; k++) {
				if (j != 38) {
					if (list_order[k] == j) printf("%d ", k);
				}
				else {
					if (list_order[k] == j) printf("%d\n%d\n", k,list_order[38]);
				}
			}
		}
	}
	return 0;
}
