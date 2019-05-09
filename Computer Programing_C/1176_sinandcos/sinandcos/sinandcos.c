#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#define PI 3.14f

double n;
double degree;
char fx[4];
char sin_t[] = "sin";
char cos_t[] = "cos";
double fxsin(double, double);
double fxcos(double, double);
double factorial(double);

int main() {

	while (scanf("%s %lf %lf", fx, &degree, &n) != EOF) {
		while (degree >= 360) degree = degree - 360;
		while (degree < 0) degree = degree + 360;
		double neg = 1;
		if (degree >= 180) {
			degree = degree - 180;
			neg = -1;
		}
		degree = (degree /180)* PI;
		int i = 0;
		while (fx[i]) {
			fx[i] = tolower(fx[i]);
			i++;
		}
		if (strcmp(sin_t, fx) == 0) {
			printf("%f\n", fxsin(degree, n)*neg);
		}
		else if (strcmp(cos_t, fx) == 0) printf("%f\n", fxcos(degree, n)*neg);
		else printf("Input Error.\n");
	}
}

double fxsin(double deg, double n)
{
	double result;
	result = (pow(-1, n)*pow(deg, 2 * n + 1)) / factorial(2 * n + 1);
	if (n == 0) return result;
	else return result + fxsin(deg, n - 1);
}

double fxcos(double deg, double n)
{
	double result;
	result = (pow(-1, n)*pow(deg, 2 * n)) / factorial(2 * n);
	if (n == 0) return result;
	else return result + fxcos(deg, n - 1);
}

double factorial(double n) {
	double result = n;
	if (n == 0) return 1;
	else return result * factorial(n - 1);
}
