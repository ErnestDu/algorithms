#include <stdio.h>
int gcd(int x, int y) {
	int m;
	if (x > y) {
		m = y;
	}
	else {
		m = x;
	}
	int i;
	for (i = m; i >= 1; i--) {
		if (x % i == 0 && y % i == 0) {
			return i;
		}
	}
	return i;
}

int main()
{
	int a, b, n;
	int flag;
	int result;
	while (scanf("%d %d %d", &a, &b, &n) != EOF) {
		flag = 0;
		while (flag == 0) {
			if (n >= gcd(a, n) && n != 0) {
			//	printf("a %d n %d gcd %d\n", a, n, gcd(a, n));
				n = n - gcd(a, n);
			//	printf("n %d\n", n);
				if (n == 0) {
					result = 0;
					flag = 1;
				}
			} else {
				flag = 1;
				result = 1;
			}
			if (n >= gcd(b, n) && n != 0) {
				n = n - gcd(b, n);
			//	printf("b %d n %d gcd %d\n", b, n, gcd(b, n));
				if (n == 0) {
					result = 1;
					flag = 1;
				}
			}
			else {
				flag = 1;
				result = 0;
			}
		}
		printf("%d\n", result);
	}
}
