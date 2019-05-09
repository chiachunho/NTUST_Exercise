#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char in[100];
int cnt = 0;
char table[7][3];

int main() {

	while (scanf("%s", in) != EOF) {
		int i = 0, j = 0;
		bool print = true;

		char save[100] = { 0 };

		while (in[i] && cnt < 7)
		{
			if (in[i] == '0' || in[i] == '1') {
				print = false;
			}
			else if (in[i] >= '2' && in[i] <= '9') {
				cnt++;
				save[j] = in[i];
				switch (save[j]) {
				case '2':
					table[j][0] = 'A';
					table[j][1] = 'B';
					table[j][2] = 'C';
					break;
				case '3':
					table[j][0] = 'D';
					table[j][1] = 'E';
					table[j][2] = 'F';
					break;
				case '4':
					table[j][0] = 'G';
					table[j][1] = 'H';
					table[j][2] = 'I';
					break;
				case '5':
					table[j][0] = 'J';
					table[j][1] = 'K';
					table[j][2] = 'L';
					break;
				case '6':
					table[j][0] = 'M';
					table[j][1] = 'N';
					table[j][2] = 'O';
					break;
				case '7':
					table[j][0] = 'P';
					table[j][1] = 'R';
					table[j][2] = 'S';
					break;
				case '8':
					table[j][0] = 'T';
					table[j][1] = 'U';
					table[j][2] = 'V';
					break;
				case '9':
					table[j][0] = 'W';
					table[j][1] = 'X';
					table[j][2] = 'Y';
					break;
				}
				j++;
			}
			i++;
		}
		if (!print) printf("Can't print a word!\n");
		else {
			if (cnt == 0) printf("None.\n");
			else {
				//printf("%s\n", save);
				//for (int a = 0; a < 3; a++) {
				//	if (cnt == 1) printf("%c\n", table[0][a]);
				//	else {
				//		for (int b = 0; b < 3; b++) {
				//			if (cnt == 2) printf("%c%c\n", table[0][a], table[1][b]);
				//			else {
				//				for (int c = 0; c < 3; c++) {
				//					if (cnt == 3) printf("%c%c%c\n", table[0][a], table[1][b], table[2][c]);
				//					else {
				//						for (int d = 0; d < 3; d++) {
				//							if (cnt == 4) printf("%c%c%c%c\n", table[0][a], table[1][b], table[2][c], table[3][d]);
				//							else {
				//								for (int e = 0; e < 3; e++) {
				//									if (cnt == 5) printf("%c%c%c%c%c\n", table[0][a], table[1][b], table[2][c], table[3][d], table[4][e]);
				//									else {
				//										for (int f = 0; f < 3; f++) {
				//											if (cnt == 6) printf("%c%c%c%c%c%c\n", table[0][a], table[1][b], table[2][c], table[3][d], table[4][e], table[5][f]);
				//											else {
				//												for (int g = 0; g < 3; g++) printf("%c%c%c%c%c%c%c\n", table[0][a], table[1][b], table[2][c], table[3][d], table[4][e], table[5][f], table[6][g]);
				//											}
				//										}
				//									}
				//								}
				//							}
				//						}
				//					}
				//				}
				//			}
				//		}
				//	}
				//}
			}
		}

	}
	return 0;
}
//
//void recurrence(int now) {
//	int vari[10];
//
//	for (vari[now] = 0; vari[now] < 3; vari[now]++)
//	{
//		if (now == 1) printfinal(cnt);
//		else  recurrence(now - 1); 
//	}
//
//}
//
//void printfinal(int num) {
//	switch (num) {
//	case 1:
//		printf("%c\n", table[0][]);
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//	case 6:
//	case 7:
//					
//
//	}
//
//}