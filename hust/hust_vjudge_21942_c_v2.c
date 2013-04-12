#include <stdio.h>
#include <math.h>
// return 1 if x is a prime number
int prime(int x) {
	int i, j;
	j = (int)sqrt(x);
	// input are greater than 1
	//if (x < 2)
	//	return 0;
	for (i = 2; i <= j; i++) {
		if (x % i == 0) 
			return 0;
	}
	return 1;
}

int main() {
	int  found, n, i;
	while (scanf("%d", &n)) {
		if (n == 0) 
			return 0;
		found = 0;
		for ( i = 3; i <= n / 2; i++) {
			if (prime(i) && prime(n-i)) {
				found = 1;
				printf("%d = %d + %d\n", n, i, n - i);
				break;
			}
		}
		if (!found) 
			printf("Goldbach's conjecture is wrong.\n"); // impossible!
	}
}
