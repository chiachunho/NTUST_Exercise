#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
//#define DEBUG

int main() {

	char key[256];
	while (gets(key) !=NULL) {
		char line[256];
		gets(line);
#ifdef DEBUG
		puts(key);
		puts(line);
#endif // DEBUG
		int pkey = 0;
		for (int i = 0; i < strlen(line); i++) {
			if (pkey == strlen(key)) pkey = 0;
			if (isupper(line[i])) {
				line[i] = line[i] - key[pkey] + 97;
				while (line[i] < 65) line[i] += 26;
				pkey++;
			}
			if (islower (line[i])) {
				line[i] = line[i] - key[pkey] + 97;
				while (line[i] < 97) line[i] += 26;
				pkey++;
			}
		}
#ifdef DEBUG
		puts(line);
#endif // DEBUG
		for (int i = 0; i < strlen(line); i++) {
			pkey = 0;
			while (line[i + pkey] == key[pkey]) pkey++;
			if (pkey == strlen(key)) {
				for (int j = i+strlen(key); j < strlen(line)+strlen(key); j++) {
					line[j - strlen(key)] = line[j];
				}
				i--;
			}
		}
		puts(line);
	}
	return 0;
}
