#include <stdio.h>
#include <math.h>
// return 1 if x is a prime number
int prime(int x) {
	int i, j;
	j = sqrt(x);
	if (x < 2)
		return 0;
	else if (x == 2) 
		return 1;
	for (i = 2; i <= j; i++) {
		if (x % i == 0) 
			return 0;
	}
	return 1;
}

int main() {
	int a, d, n, m, i, count;
	while (scanf("%d %d %d", &a, &d, &n) != EOF) {
		if (a == 0 && d == 0 && n == 0) 
			return 0;
		count = 0;
		for (i = 0; count != n; i++) {
			m = a + i * d;
			if (prime(m)) 
				count++;
		}
		printf("%d\n", m);
	}
}
