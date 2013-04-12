#include <stdio.h>
#include <math.h>
// return 1 if x is a prime number
int prime(int x) {
	int i;
	if (x < 2)
		return 0;
	else if (x == 2) 
		return 1;
	for (i = 2; i <= (int)sqrt(x); i++) {
		if (x % i == 0) 
			return 0;
	}
	return 1;
}

int main() {
	int p[1500]; // large enough for all the prime numbers below 10000
	int i, j, n, sum, count;
	j = 0;
	// generate prime number array p
	for (i = 0; i < 10001; i++) {
		if (prime(i)) {
			p[j++] = i;
		}
	}
	
	while(scanf("%d", &n) && n != 0) {
		count = 0;
		for (i = 0; p[i] <= n; i++) {
			sum = 0;
			for (j = i; sum < n; j++) {
				sum += p[j];
				if (sum == n) 
					count++;
			}
		}
		printf("%d\n", count);
	}
}
