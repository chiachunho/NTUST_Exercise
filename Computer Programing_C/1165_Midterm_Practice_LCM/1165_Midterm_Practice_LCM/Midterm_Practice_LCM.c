#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int  main() {

	int amount;

	while (scanf("%d", &amount) != EOF) {
		long long int in[1000] = { 0 };
		for (int i = 0; i < amount; i++) scanf("%lld", &in[i]);
		long long int max = in[0];
		for (int i = 0; i < amount; i++) {
			if (in[i] > max) {
				max = in[i];
			}
		}
		long long int prime[1000] = { 0 };
		int len = 0;
		for (long long int i = 2; i <= max; i++) {
			int cnt = 0;
			for (long long int j = 1; j < i; j++) {
				if (i%j == 0) cnt++;
			}
			if (cnt == 1) {
				prime[len] = i;
				len++;
			}
		}
		long long int times[1000] = { 0 };
		long long int result = 1;
		for (int i = 0; i < len; i++) {
			int cnt;
			do {
				cnt = 0;
				for (int j = 0; j < amount; j++) {
					if (in[j] % prime[i] == 0) {
						in[j] = in[j] / prime[i];
						cnt++;
					}
				}
				if (cnt != 0) times[i]++;
			} while (cnt != 0);
			if (times[i] > 0) {
				printf("(%lld^%lld)", prime[i], times[i]);
				long long int tmp = pow(prime[i], times[i]);
				result = result*tmp;
			}
			
		}
		printf("\nLCM: %lld\n",result);
	}
}