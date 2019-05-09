#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int d1,d2, m1,m2,y1,y2;
	while ((scanf("%d/%d/%d %d/%d/%d", &m1,&d1,&y1,&m2,&d2,&y2)) != EOF)
	{
		if (m1 > 12 || m2 > 12) printf("Month Error!\n");

		else if (y1%4==0 && m1==2 && d1>29) printf("Day Error!\n");
		else if (y2 % 4 == 0 && m2 == 2 && d2>29) printf("Day Error!\n");

		else if (y1 % 4 != 0 && m1 == 2 && d1>28) printf("Day Error!\n");
		else if (y2 % 4 != 0 && m2 == 2 && d2>28) printf("Day Error!\n");

		else if ((m1==1 ||m1==3 || m1==5 || m1==7 || m1==8 || m1==10 || m1==12) && d1>31) printf("Day Error!\n");
		else if ((m2 == 1 || m2 == 3 || m2 == 5 || m2 == 7 || m2 == 8 || m2 == 10 || m2 == 12) && d2>31) printf("Day Error!\n");

		else if ((m1 ==4 || m1 == 6 || m1 == 9 || m1 == 11) && d1>30) printf("Day Error!\n");
		else if ((m2 == 4 || m2 == 6 || m2 == 9 || m2 == 11) && d2>30) printf("Day Error!\n");

		else {
			if (y1 < y2) printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m1, d1, y1, m2, d2, y2);
			else if (y1>y2) printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m2, d2, y2, m1, d1, y1);
			else {
				if (m1 < m2) printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m1, d1, y1, m2, d2, y2);
				else if (m1>m2) printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m2, d2, y2, m1, d1, y1);
				else {
					if (d1 < d2) printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m1, d1, y1, m2, d2, y2);
					else if (d1>d2) printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m2, d2, y2, m1, d1, y1);
				}
			}
		}

	}
	return 0;

}