#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct{
	int studentID;
	char name[256];
	float high;
	float weight;
	int score;
	int grade;
} data;


int main() {
	data db[100] = {0};
	int in;
	char sort[10];
	while (scanf(" %d %s", &in,sort) != EOF) {
		for (int i = 1; i <= in; i++) {
			scanf(" %d %s %f %f %d %d", &db[i].studentID, db[i].name, &db[i].high, &db[i].weight, &db[i].score, &db[i].grade);
		}
		if (!strcmp("studentID", sort)) {
			for (int i = 0; i < in; i++) {
				db[0] = db[1];
				int min = 1;
				for (int j = 1; j <= in - i; j++) {
					if (db[j].studentID < db[0].studentID) {
						db[0] = db[j];
						min = j;
					}
				}
				for (int k = min; k < in - i; k++) db[k] = db[k + 1];
				printf("%d %s %.2f %.2f %d %d\n", db[0].studentID, db[0].name, db[0].high, db[0].weight, db[0].score, db[0].grade);
			}
		}
		else if (!strcmp("name", sort)) {
			for (int i = 0; i < in; i++) {
				db[0] = db[1];
				int min = 1;
				for (int j = 1; j <= in - i; j++) {
					if (db[j].name[0] < db[0].name[0]) {
						db[0] = db[j];
						min = j;
					}
				}
				for (int k = min; k < in - i; k++) db[k] = db[k + 1];
				printf("%d %s %.2f %.2f %d %d\n", db[0].studentID, db[0].name, db[0].high, db[0].weight, db[0].score, db[0].grade);
			}
		}
		else if (!strcmp("high", sort)) {
			for (int i = 0; i < in; i++) {
				db[0] = db[1];
				int min = 1;
				for (int j = 1; j <= in - i; j++) {
					if (db[j].high < db[0].high) {
						db[0] = db[j];
						min = j;
					}
				}
				for (int k = min; k < in - i; k++) db[k] = db[k + 1];
				printf("%d %s %.2f %.2f %d %d\n", db[0].studentID, db[0].name, db[0].high, db[0].weight, db[0].score, db[0].grade);
			}
		}
		else if (!strcmp("weight", sort)) {
			for (int i = 0; i < in; i++) {
				db[0] = db[1];
				int min = 1;
				for (int j = 1; j <= in - i; j++) {
					if (db[j].weight < db[0].weight) {
						db[0] = db[j];
						min = j;
					}
				}
				for (int k = min; k < in - i; k++) db[k] = db[k + 1];
				printf("%d %s %.2f %.2f %d %d\n", db[0].studentID, db[0].name, db[0].high, db[0].weight, db[0].score, db[0].grade);
			}
		}
		else if (!strcmp("score", sort)) {
			for (int i = 0; i < in; i++) {
				db[0] = db[1];
				int min = 1;
				for (int j = 1; j <= in - i; j++) {
					if (db[j].score < db[0].score) {
						db[0] = db[j];
						min = j;
					}
				}
				for (int k = min; k < in - i; k++) db[k] = db[k + 1];
				printf("%d %s %.2f %.2f %d %d\n", db[0].studentID, db[0].name, db[0].high, db[0].weight, db[0].score, db[0].grade);
			}
		}
		else if (!strcmp("grade", sort)) {
			for (int i = 0; i < in; i++) {
				db[0] = db[1];
				int min = 1;
				for (int j = 1; j <= in - i; j++) {
					if (db[j].grade < db[0].grade) {
						db[0] = db[j];
						min = j;
					}
				}
				for (int k = min; k < in - i; k++) db[k] = db[k + 1];
				printf("%d %s %.2f %.2f %d %d\n", db[0].studentID, db[0].name, db[0].high, db[0].weight, db[0].score, db[0].grade);
			}
		}
	}
	return 0;
}
