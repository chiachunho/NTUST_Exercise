#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
// C recursive function to solve tower of hanoi puzzle
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
	if (n == 1){
		printf("Disk 1 : From %c to %c\n", from_rod, to_rod);
		return;
	}
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
	printf("Disk %d : From %c to %c\n", n, from_rod, to_rod);
	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {

	int in;
	while (scanf("%d", &in) != EOF) {
		towerOfHanoi(in, 'A', 'C', 'B');  // A, B and C are names of rods
		printf("%d\n", (int)pow(2, in) - 1);
	}
	return 0;
}
