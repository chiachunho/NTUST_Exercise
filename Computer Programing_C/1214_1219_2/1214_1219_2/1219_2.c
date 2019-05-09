#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
	char name[256];
	int times;
};

int compare_times(const void* a, const void* b){
	if (((struct person*)a)->times != ((struct person *)b)->times) 
		return ((struct person *)a)->times - ((struct person*)b)->times;
	else return strcmp(((struct person *)a)->name, ((struct person*)b)->name);
}

int main() {
	char in[1024];
	while (gets(in) != NULL) {
		//read flower
		int flower[256] = { 0 };
		int p_flower = 0;
		char *token = strtok(in, " ");
		while (token!= NULL) {
			flower[p_flower] = atoi(token);
			p_flower++;
			token = strtok(NULL, " ");
		}
		//read person
		gets(in);
		struct person people[256] = { 0 };
		int p_people = 0;
		token = strtok(in, " ");
		while (token != NULL) {
			strcpy(people[p_people].name, token);
			p_people++;
			token = strtok(NULL, " ");
		}
		//read input people
		gets(in);
		char input_n[256][256] = { 0 };
		int input_r[256] = { 0 };
		int p_input = 0;
		int num = 0;
		token = strtok(in, " ");
		while (token!= NULL) {
			if (num%2==0) input_r[p_input] = atoi(token);
			else {
				strcpy(input_n[p_input], token);
				p_input++;
			}
			num++;
			token = strtok(NULL, " ");
		}
		//read end & round start
		int round = 1;
		int now_people = 0;
		for (int i = 0; i < p_flower; i++) {
			for (int j = 1; j <= flower[i]; j++) {
				if (p_people > 1) { //dedect people value
					//detect people input
					for (int k = 0; k < p_input; k++) {
						if (round == input_r[k]) {
							printf("%d: %s joined.\n", round, input_n[k]);
							for (int m = p_people; m > now_people; m--) {
								people[m] = people[m - 1];
							}
							strcpy(people[now_people].name, input_n[k]);
							people[now_people].times = 0;
							p_people++;
							for (int n = k; n < p_input; n++) {
								strcpy(input_n[k], input_n[k + 1]);
								input_r[k] = input_r[k + 1];
							}
							p_input--;
						}
					}
					if (now_people >= p_people) now_people = 0;
					if (j == flower[i]) {
						people[now_people].times++;
						if (people[now_people].times == 3) {
							printf("%d: %s vanished.\n", round, people[now_people].name);
							for (int m = now_people; m <p_people; m++) {
								people[m] = people[m + 1];
							}
							p_people--;
							now_people--;
						}
					}
					round++;
					now_people++;
				}
			}
		}
		for (int i = 0; i < p_input; i++) {
			strcpy(people[p_people].name, input_n[i]);
			p_people++;
		}
		qsort(people, p_people, sizeof(people[0]), compare_times);
		printf("Survivor: ");
		for (int i = 0; i < p_people; i++) {
			if (!i) printf("%s", people[i].name,people[i].times);
			else printf(", %s", people[i].name,people[i].times);
		}
		printf("\n");
	}
	return 0;
}
