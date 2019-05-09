#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int m, n, i,j;
	while ((scanf("%d %d", &m, &n)) != EOF)

	{
		n--;
		for (i = 0; i < n; i++) printf("   ");
		for (j = 1; j <= m; j++) {
			printf("%3d", j);
			n++;
			if (n == 7) {
				printf("\n");
				n = 0;
			}
		}
		if(n !=0)printf("\n");
	}
		system("pause");
	return 0;
}