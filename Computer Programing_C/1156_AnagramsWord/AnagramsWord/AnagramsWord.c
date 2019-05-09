#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char a[256];
	char b[256];
	while (scanf("%s", a) != EOF) {
		scanf("%s", b);
		int i = 0,j=0,cnt=0;
		while (a[i]) {
			a[i] = toupper(a[i]);
			i++;
		}
		while (b[j]) {
			b[j] = toupper(b[j]);
			j++;
		}
		if (i == j) {
			for (int x = 0; x < i; x++) {
				for (int y = 0; y < i; y++) {
					if (a[x] == b[y]) a[x] = 0;
				}
			}
			for (int x = 0; x < i; x++) {
				if (a[x] == 0) cnt++;
			}
			if (cnt == i) printf("The word are anagrams.\n");
			else printf("The word are not anagrams.\n");
		}
		else printf("The word are not anagrams.\n");
	}
	return 0;
}