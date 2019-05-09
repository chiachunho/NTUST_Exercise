#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int labx = 0, laby = 0;
int maze[100][100];
int strx = 0, stry = 0;
int ansx = 0, ansy = 0;
int print_times = 0;
int points;
int i = 0;
int times[100];
void step(int x, int y);
void print_maze();
void save_maze();
int lab[100][100];
int min = 0;

int main()
{
	char tmp;
	while (scanf("%d %d", &labx, &laby) != EOF) {
		for (int i = 0; i < labx; i++) {
			for (int j = 0; j < laby; j++) {
				tmp = getchar();
				if (tmp == '\n') j--;
				else if (tmp == ' ') maze[i][j] = 0;
				else if (tmp == '.') {
					strx = i;
					stry = j;
					maze[i][j] = 1;
				}
				else maze[i][j] = 2;
			}
		}
		for (int i = 0; i < labx; i++) {
			if (i == 0 || i == (labx - 1)) {
				for (int j = 0; j < laby; j++) {
					if (maze[i][j] == 0) {
						ansx = i;
						ansy = j;
					}
				}
			}
			else {
				if (maze[i][0] == 0) {
					ansx = i;
					ansy = 0;
				}
				else if (maze[i][laby - 1] == 0) {
					ansx = i;
					ansy = laby - 1;
				}
			}
		}
		step(strx, stry);
		int strx = 0, stry = 0;
		int ansx = 0, ansy = 0;
		int labx = 0, laby = 0;
		if (print_times == 0) printf("No path.\n");
		else print_maze();
		print_times = 0;
		min = 0;
		i = 0;
	}

	return 0;
}


void step(int x, int y)
{
	maze[x][y] = 1;
	points++;
	if (x == ansx && y == ansy) {
		times[print_times] = points;
		if (i == 0) {
			min = times[i];
			save_maze();
		}
		else if (times[i] < min) {
			min = times[i];
			save_maze();
		}
		i++;
		print_times++;
	}
	if (y < (laby - 1) && maze[x][y + 1] == 0) { step(x, y + 1); }
	if (x < (labx - 1) && maze[x + 1][y] == 0) { step(x + 1, y); }
	if (y > 0 && maze[x][y - 1] == 0) { step(x, y - 1); }
	if (x > 0 && maze[x - 1][y] == 0) { step(x - 1, y); }
	maze[x][y] = 0;
	points--;
}


void print_maze()
{
	for (int x = 0; x < labx; x++) {
		for (int y = 0; y < laby; y++) {
			if (lab[x][y] == 2)
				printf("#");
			else if (lab[x][y] == 1)
				printf(".");
			else if (lab[x][y] == 0)
				printf(" ");
		}
		printf("\n");
	}
}
void save_maze()
{
	for (int x = 0; x < labx; x++) {
		for (int y = 0; y < laby; y++) {
			lab[x][y] = maze[x][y];
		}
	}
}