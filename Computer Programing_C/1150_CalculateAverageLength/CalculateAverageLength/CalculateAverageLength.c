#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main(void)
{
	char a[256],in;
	double len=0;
	int i, space, crew;
	while ((in = getchar()) != EOF) {
		len = 0;
		space = 0;
		crew = 0;
		char last = ' ';
		while (in != '\n')
		{
			len++;
			if (in == ' ')space++;
			else if (last == ' ')crew++;
			last = in;
			in = getchar();
			
		}
		printf("len_%f\n", len);
		printf("space_%d\n", space);
		printf("crew_%d\n", crew);
		len = (len - space) / crew;
		printf("Average word length: %.1f\n", len);
	}
/*	while (gets(a) != EOF) {
		len = strlen(a);
		space = 0;
		crew = 0;
		char last = ' ';
		for (i = 0; i <= len; i++)
		{
			if (a[i] == ' ')space++;
			else if (last == ' ')crew++;
			last = a[i];
		}
		len = (len - space) / crew;
		printf("Average word length: %.1f\n", len);
	}*/
	return 0;
}
