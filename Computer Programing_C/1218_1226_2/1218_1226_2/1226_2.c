#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {

	int num,role,change;
	while (scanf("%d %d %d", &num, &role, &change) != EOF) {
		bool cup[1000000] = { false };
		int pos;
		int bone = 1;
		for (int i = 0; i < role; i++) {
			scanf("%d", &pos);
			cup[pos] = true;
		}
		int a, b;
		int stuck = 0;
		for (int i = 0; i < change; i++) {
			scanf("%d %d", &a,&b);
			if (!stuck) {
				if (bone == a) bone = b;
				else if (bone == b) bone = a;
			}
			if (cup[bone]) stuck = 1;
		}
		printf("%d\n", bone);

	}
	return 0;
}
