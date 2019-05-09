#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data{
	char str[200+1];
	struct data *next;
};

struct data *add_to_list(struct data *list ,char *n){
	struct data *new_data;
	new_data = malloc(sizeof(struct data));
	// avoid memory not enough
	if (new_data == NULL) {
		puts("Malloc failed!!!");
		exit(0);
	}
	strcpy(new_data->str, n);
	new_data->next = list;
	return new_data;
};

struct data *search_min(struct data *list) {
	struct data *prev, *cur, *cur_min,*prev_min;
	for (prev = NULL , cur=list , prev_min=NULL , cur_min=list;
		cur != NULL;
		prev = cur, cur=cur->next) {
		if (strcmp(cur_min->str, cur->str) > 0) {
			cur_min = cur;
			prev_min = prev;
		}
	}
	printf("%s\n", cur_min->str);
	if (prev_min != NULL) prev_min->next = cur_min->next;
	else return cur_min->next;
	free(cur_min);
	return list;
}

int main() {

	char in[10];
	while (gets(in) != NULL) {
		int num = atoi(in);
		for (int i = 0; i < num; i++) {
			int qua = 0;
			char *string[200+1];
			struct data *first = NULL;
			while (gets(string)) {
				if (!strcmp(string, "-")) break;
				first = add_to_list(first, string);
				qua++;
			}
			for (int j=0; j<qua; j++) first = search_min(first);
		}
	}
	return 0;
}
