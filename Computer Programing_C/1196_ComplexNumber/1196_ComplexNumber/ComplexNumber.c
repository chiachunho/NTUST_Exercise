#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int a, b;
	char ope;
} complex;

int main() {
	complex com[3] = {0};
	while (scanf("%d %c %di", &com[0].a,&com[0].ope,&com[0].b) != EOF) {
		scanf("%d %c %di", &com[1].a, &com[1].ope, &com[1].b);
		for (int i = 0; i < 2; i++) if (com[i].ope == '-') com[i].b *= -1;
		char ope;
		scanf(" %c", &ope);
		switch (ope){
		case '+':
			com[2].a = com[0].a + com[1].a;
			com[2].b = com[0].b + com[1].b;
			break;
		case'-':
			com[2].a = com[0].a - com[1].a;
			com[2].b = com[0].b - com[1].b;
			break;
		case '*':
			com[2].a = com[0].a * com[1].a+ (-1)*com[0].b * com[1].b;
			com[2].b = com[0].a * com[1].b + com[0].b * com[1].a;
			break;
		}
		printf("%d %c %di\n", com[2].a, (com[2].b < 0) ? '-' : '+', abs(com[2].b));
	}
	return 0;
}
