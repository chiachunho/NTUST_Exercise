/*
Offset             Bytes             Characters
------ ----------------------------- ----------
0 30 31 32 33 34 35 36 37 38 39 0123456789
Offset             Bytes             Characters
------ ----------------------------- ----------
0 70 72 69 6E 74 66 28 22 68 65 printf("he
10 6C 6C 6F 20 77 6F 72 6C 64 22 llo world"
20 29 3B                         );
Offset             Bytes             Characters
------ ----------------------------- ----------
0 23 69 6E 63 6C 75 64 65 20 3C #include <
10 73 74 64 69 6F 2E 68 3E 20 23 stdio.h> #
20 69 6E 63 6C 75 64 65 20 3C 73 include <s
30 74 64 6C 69 62 2E 68 3E 20 69 tdlib.h> i
40 6E 74 20 6D 61 69 6E 28 29 20 nt main()
50 7B 69 6E 74 20 61 20 3D 20 30 {int a = 0
60 3B 20 70 72 69 6E 74 66 28 22 ; printf("
70 25 64 22 2C 61 29 3B 20 72 65 %d",a); re
80 74 75 72 6E 20 30 3B 7D       turn 0;}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char in[1024];
	while (gets(in) != NULL) {
		puts("Offset             Bytes             Characters");
		puts("------ ----------------------------- ----------");
		char *p = in;
		int len = strlen(in);
		int line = 0;
		while (len >0) {
			char str[11] = { 0 };
			printf("%6d", line);
			for (int i = line; i < line+10; i++,len--) {
				if (len > 0) {
					printf(" %02X", in[i]);
					str[i - line] = in[i];
				}
				else {
					printf("   ");
					str[i - line] = ' ';
				}
			}
			printf(" %s\n",str);
			line += 10;
		}
	}
	return 0;
}
