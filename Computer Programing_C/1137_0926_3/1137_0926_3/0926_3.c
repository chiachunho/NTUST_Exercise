#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int i;
	int num, ten, hun;
	int cnt = 0;

	while (scanf("%d", &i) != EOF) {
		hun = i / 100;
		ten = (i - (hun * 100)) / 10;
		num = i - (hun * 100) - (ten * 10);

		switch (hun) {
		case 1: printf("C"); cnt += 1; break;
		case 2: printf("CC"); cnt += 1; break;
		case 3: printf("CCC"); cnt += 1; break;
		case 4: printf("CD"); cnt += 2; break;
		case 5: printf("D"); cnt += 1; break;
		case 6:printf("DC"); cnt += 2; break;
		case 7:printf("DCC"); cnt += 2; break;
		case 8:printf("DCCC"); cnt += 2; break;
		case 9:printf("CM"); cnt += 2; break;
		case 0:printf("");  break;
		case 10:printf("M"); cnt += 1; break;
		}
		switch (ten) {
		case 1: printf("X"); cnt += 1; break;
		case 2: printf("XX"); cnt += 1; break;
		case 3: printf("XXX"); cnt += 1; break;
		case 4: printf("XL"); cnt += 2; break;
		case 5: printf("L"); cnt += 1; break;
		case 6:printf("LX"); cnt += 2; break;
		case 7:printf("LXX"); cnt += 2; break;
		case 8:printf("LXXX"); cnt += 2; break;
		case 9:printf("XC");
			if (hun == 5 || hun == 0 || hun == 10)cnt += 2;
			else cnt += 1;
			break;
		case 0:printf(""); break;
		}
		switch (num) {
		case 1: printf("I"); cnt += 1; break;
		case 2: printf("II"); cnt += 1; break;
		case 3: printf("III"); cnt += 1; break;
		case 4: printf("IV"); cnt += 2; break;
		case 5: printf("V"); cnt += 1; break;
		case 6:printf("VI"); cnt += 2; break;
		case 7:printf("VII"); cnt += 2; break;
		case 8:printf("VIII"); cnt += 2; break;
		case 9:printf("IX");
			if (ten == 5 || ten == 0)cnt += 2;
			else cnt += 1;
			break;
		case 0:printf(""); break;
		}
		printf(",%d\n", cnt);
		cnt = 0;
	}

	return 0;
}