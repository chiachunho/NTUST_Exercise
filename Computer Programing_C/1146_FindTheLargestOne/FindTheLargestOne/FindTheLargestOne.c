#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	double num,fin=0;
	int i = 0;
	while ((scanf("%lf", &num)) != EOF)
	{	
		if (num > fin) {
			fin = num;
			i = 1;
		}
		while (num <= 0)
		{
			if (i == 0) {
				printf("Nothing...\n");
				num = 1;
			}
			else {
				printf("%lf\n", fin);
				num = 1;
				i = 0;
				fin = 0;
			}
		}
	}
		return 0;
}