#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main() {
	const char num[14] = { '2','3','4','5','6','7','8','9','t','j','q','k','a' };
	const char rank[5] = { 'c', 'd', 'h', 's' };
	char in[5][3];
	while (scanf("%s", &in[0]) != EOF) {
		bool allcard[13][4] = { false };
		bool four = false;
		bool full = false;
		bool flush = false;
		bool straight = false;
		bool three = false;
		bool two = false;
		bool one = false;
		bool dup = false;
		bool ill = false;
		//read in 
		for (int i = 1; i < 5; i++) scanf("%s", &in[i]);
		//towlower
		for (int i = 0; i < 5; i++) in[i][1] = towlower(in[i][1]);
		//Duplicate detect
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (i != j) {
					if (strcmp(in[i], in[j]) == 0) dup = true;
				}
			}
		}
		//illegal detect
		for (int i = 0; i < 5; i++) {
			int ill_cnt = 0;
			for (int j = 0; j < 13; j++) {
				if (num[j] != in[i][0])  ill_cnt++;
			}
			for (int k = 0; k < 4; k++) {
				if (rank[k] != in[i][1]) ill_cnt++;
			}
			if (ill_cnt != 15) ill = true;
		}
		//write in array
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 13; j++) {
				for (int k = 0; k < 4; k++) {
					if (in[i][0] == num[j] && in[i][1] == rank[k]) {
						if (!allcard[j][k]) allcard[j][k] = true;
					}
				}
			}
		}
		//error message
		if (dup && ill) printf("Illegal and Duplicate cards");
		else if (dup) printf("Duplicate card");
		else if (ill) printf("Illegal card");
		else {
			//flush
			for (int i = 0; i < 4; i++) {
				int kind_cnt = 0;
				for (int j = 0; j < 13; j++) {
					if (allcard[j][i]) kind_cnt++;
				}
				if (kind_cnt == 5) flush = true;
			}
			//number_cnt
			int num_cnt[13] = { 0 };
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 13; j++) {
					if (allcard[j][i]) num_cnt[j]++;
				}
			}
			//straight
			for (int i = 0; i < 9; i++) {
				int tmp = 0;
				if (i == 0) {
					for (int j = i; j < i + 5; j++) {
						if (num_cnt[j] == 1) tmp++;
						else if (j == 4) {
							if (num_cnt[12] == 1) tmp++;
						}
					}
				}
				else {
					for (int j = i; j < i + 5; j++) {
						if (num_cnt[j] == 1) tmp++;
					}
				}
				if (tmp == 5) straight = true;
			}

			for (int i = 0; i <13; i++) {
				//four of a kind
				if (num_cnt[i] == 4) four = true;
				else if (num_cnt[i] == 3) {
					three = true; //three of a kind
					for (int j = 0; j < 13; j++) { //full house
						if (num_cnt[j] == 2) full = true;
					}
				}
				else if (num_cnt[i] == 2) {
					one = true; //one pair
					for (int j = 0; j < 13; j++) {
						if (j != i) { //two pairs
							if (num_cnt[j] == 2) two = true;
						}
					}
				}
			}
			//print type
			if (straight && flush) printf("Straight Flush");
			else if (four) printf("Four-Of-A-Kind");
			else if (full) printf("Full House");
			else if (flush) printf("Flush");
			else if (straight) printf("Straight");
			else if (three) printf("Three-Of-A-Kind");
			else if (two) printf("Two Pairs");
			else if (one) printf("Pair");
			else printf("High Card");
			//print card
			for (int i = 0; i <13; i++) {
				for (int j = 0; j< 4; j++) {
					if (allcard[i][j]) printf(" %c%c", num[i], rank[j]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}