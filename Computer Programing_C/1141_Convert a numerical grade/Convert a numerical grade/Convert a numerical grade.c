#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	while ((scanf("%d",&i)) != EOF)
	{
		if (i >= 90 && i <= 100) {
			printf("Letter grade: A\n");
		}
		else if (i >= 80 && i <= 89) {
			printf("Letter grade: B\n");
		}
		else if (i >= 70 && i <= 79) {
			printf("Letter grade: C\n");
		}
		else if (i >= 60 && i <= 69) {
			printf("Letter grade: D\n");
		}
		else if (i >= 0 && i <= 59) {
			printf("Letter grade: F\n");
		}
		else {
			printf("Error!\n");
		}
	}
	return 0;

}