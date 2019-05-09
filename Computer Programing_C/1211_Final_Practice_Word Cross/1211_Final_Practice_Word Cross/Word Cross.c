#define _CRT_SECURE_NO_WARNINGS
//#define DEBUG
#define max(a,b) (((a) > (b)) ? (a) : (b))
#include <stdio.h>

int main() {

	char a1[25],a2[25],b1[25],b2[25];
	while (scanf("%s", a1) != EOF) {
		if (a1[0] == '#') break;
		scanf("%s%s%s", a2, b1, b2);
		int pa1=-1,pa2;
		for (int i = 0; i < strlen(a1); i++) {
			pa2 = 0;
			while (a1[i] != a2[pa2] && pa2<strlen(a2)) pa2++;
			if (pa2 != strlen(a2)) {
				pa1 = i;
				break;
			}
		}
		int pb1=-1, pb2;
		for (int i = 0; i < strlen(b1); i++) {
			pb2 = 0;
			while (b1[i] != b2[pb2] && pb2<strlen(b2)) pb2++;
			if (pb2 != strlen(b2)) {
				pb1 = i;
				break;
			}
		}
#ifdef DEBUG
		printf("%d %d\n", pa1, pa2);
		printf("%d %d\n", pb1, pb2);
#endif // DEBUG
		if (pa1 == -1 || pb1 == -1) puts("Unable to make two crosses");
		else {
			int h = max(pa2, pb2);
			char puzzle[25][25] = { 0 };
			for (int i = 0; i <= h; i++) {
				if (pb2 == h) {
					for (int j = 0; j < (strlen(a1) + 3 + pb1); j++) puzzle[i][j] = ' ';
					puzzle[i][strlen(a1) + 3 + pb1] = b2[i];
					if (i - (pb2 - pa2) >= 0) puzzle[i][pa1] = a2[i - (pb2 - pa2)];
				}
				else {
					if (i - (pa2 - pb2) >= 0) {
						for (int j = 0; j < (strlen(a1) + 3 + pb1); j++) puzzle[i][j] = ' ';
						puzzle[i][strlen(a1) + 3 + pb1] = b2[i - (pa2 - pb2)];
					}
					else {
						for (int j = 0; j < pa1; j++) puzzle[i][j] = ' ';
					}
					puzzle[i][pa1] = a2[i];
				}
				if (i == h) {
					for (int j = 0; j < strlen(a1) + 3 + strlen(b1); j++) {
						if (j<strlen(a1)) puzzle[i][j] = a1[j];
						else if (j >= strlen(a1) + 3) puzzle[i][j] = b1[j - strlen(a1) - 3];
						else puzzle[i][j] = ' ';
					}
				}
				printf("%s\n", puzzle[i]);
			}
			int h2 = max(strlen(a2) - pa2, strlen(b2) - pb2);
			for (int i = h + 1, p = 1; i < h + h2; i++, p++) {
				if (strlen(b2) - pb2 == h2) {
					for (int j = 0; j < (strlen(a1) + 3 + pb1); j++) puzzle[i][j] = ' ';
					puzzle[i][strlen(a1) + 3 + pb1] = b2[pb2 + p];
					if (pa2 + p<strlen(a2)) puzzle[i][pa1] = a2[pa2 + p];
				}
				else {
					if (pb2 + p<strlen(b2)) {
						for (int j = 0; j < (strlen(a1) + 3 + pb1); j++) puzzle[i][j] = ' ';
						puzzle[i][strlen(a1) + 3 + pb1] = b2[pb2 + p];
					}
					else for (int j = 0; j < pa1; j++) puzzle[i][j] = ' ';
					puzzle[i][pa1] = a2[pa2 + p];
				}
				printf("%s\n", puzzle[i]);
			}
		}
	}
	return 0;
}
