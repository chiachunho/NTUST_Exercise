#define _CRT_SECURE_NO_WARNINGS
#define DEBUG
#include <stdio.h>
 
int visit(int*order,int num, int p) {
	order += num*sizeof(order[0]);
	printf("%d\n", order[p]);
}

int main() {

	int in;
	while (scanf("%d", &in) != EOF) {
		int *order[200] = { 0 };
		for (int i = 0,p=0; i < in; p++) {
			scanf("%d", &order[p]);
			if (order[p] == 0) {
				i++;
				order++;
				p = -1;
			}
		}
#ifdef DEBUG
		for (int i = 0; i < in; i++) {
			for (int j = 0; j < in; j++) {
				printf("%d ", order[i][j]);
				if (!order[i][j]) break;
			}
			puts("");
		}
#endif // DEBUG
		visit(order,1,0);
	}
	return 0;
}
