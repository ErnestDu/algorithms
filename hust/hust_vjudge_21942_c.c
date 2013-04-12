#include <stdio.h>
#include <math.h>
// return 1 if x is a prime number
int prime(int x) {
	int i, j;
	j = (int)sqrt(x);
	// input starts from 2
//	if (x < 2)
//		return 0;
//	else if (x == 2) 
//		return 1;
	for (i = 2; i <= j; i++) {
		if (x % i == 0) 
			return 0;
	}
	return 1;
}

int main() {
	int count, found, n, i;
	count = 0;
	int p[45000];	// 41538 prime numbers from 1 - 500000
	count = 0;
	for (i = 2; i < 500001; i++) {
		if (prime(i)) 
			p[count++] = i;
	}
	//printf("count %d", count);
	while (scanf("%d", &n)) {
		if (n == 0) 
			return 0;
		found = 0;
		for (i = 1; found == 0 ;i++) {// p[0] is 2, start from p[1]
			if (prime(n - p[i])) {
				printf("%d = %d + %d\n", n, p[i], n - p[i]);
				found = 1;
			}
		}
		if (found == 0) 
			printf("Goldbach's conjecture is wrong.\n"); // impossible!
	}
}
