#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {

	char firstName[25];
	char lastName[30];
	char phone[15];

} StRec;

int main() {

	StRec rec[11];
	char cmd[50];
	int n = -1;
	while (scanf(" %s", cmd) != EOF) {
		int item=10;
		switch (cmd[0])
		{
		case'i':
			if (n < 9) {
				n++;
				scanf(" %s %s %s", rec[n].firstName, rec[n].lastName, rec[n].phone);
			}
			else puts("Insert Error");
			break;
		case 's':
			scanf(" %s %s %s", rec[10].firstName, rec[10].lastName, rec[10].phone);
			for (int i = 0; i <=n; i++) {
				int cnt = 0;
				if (!strcmp(rec[10].firstName, rec[i].firstName)) cnt++;
				if (!strcmp(rec[10].lastName, rec[i].lastName)) cnt++;
				if (!strcmp(rec[10].phone, rec[i].phone)) cnt++;
				if (cnt == 3) item = i;
			}
			if (item < 10) printf("%d\n",item);
			else puts("Search Error");
			item = 10;
			break;
		case 'd':
			scanf(" %s %s %s", rec[10].firstName, rec[10].lastName, rec[10].phone);
			for (int i = 0; i <=n; i++) {
				int cnt = 0;
				if (!strcmp(rec[10].firstName, rec[i].firstName)) cnt++;
				if (!strcmp(rec[10].lastName, rec[i].lastName)) cnt++;
				if (!strcmp(rec[10].phone, rec[i].phone)) cnt++;
				if (cnt == 3) item = i;
			}
			if (item < 10) {
				for (int i = item; i <=n; i++) {
					strcpy(rec[i].firstName, rec[i+1].firstName);
					strcpy(rec[i].lastName, rec[i + 1].lastName);
					strcpy(rec[i].phone, rec[i+1].phone);
				}
				n--;
			}
			else puts("Delete Error");
			item = 10;
			break;
		case'p':
			if (n >= 0) {
				for (int i = 0; i <= n; i++) printf("%s %s %s\n", rec[i].firstName, rec[i].lastName, rec[i].phone);
			}
			else puts("Print Error");
			break;
		default:
			break;
		}
	}
	return 0;
}
