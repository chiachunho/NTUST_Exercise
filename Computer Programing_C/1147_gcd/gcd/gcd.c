#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a, b, c;
	while ((scanf("%d %d", &a,&b)) != EOF)
	{
		if (a <= 0 || b <= 0) printf("The number must be positive!!!\n");
		else {
			while (b != 0) {
				c = a%b;
				a = b;
				b = c;
			}
			while (b == 0) {
				printf("%d\n", a);
				break;
			}
		}
	}
	return 0;
}