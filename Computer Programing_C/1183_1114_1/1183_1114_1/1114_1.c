#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int in;
float point[100][100] = { 0 };
bool inornot(float, float);

int main() {

	while (scanf("%d", &in) != EOF) {
		float ansx, ansy;
		for (int i = 0; i < in; i++) scanf("%f %f", &point[i][0], &point[i][1]);
		scanf("%f %f", &ansx, &ansy);

		if (inornot(ansx,ansy)) printf("nyan\n");
		else printf("pasu\n");

		in = 0;
		for (int i = 0; i < 100; i++) point[i][i] = 0;
	}
}

bool inornot(float x,float y)
{
	bool c = false;
	for (int i = 0, j = in - 1; i < in; j = i++) {
		if ((point[i][1] > y) != (point[j][1] > y) &&
		x < (point[j][0] - point[i][0])*(y - point[i][1]) / (point[j][1] - point[i][1]) + point[i][0])
		c = !c;

	}

	return c;
}