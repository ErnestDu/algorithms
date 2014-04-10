#include <stdio.h>
long long int cal(long long int x, long long int a) {
	if (x % a == 0) {
		return x / a;
	}
	else {
		return x / a + 1;
	}
}
int main()
{
	long long int n, m, a;
	while (scanf("%lld %lld %lld", &n, &m, &a) != EOF) {
		printf("%lld\n", cal(n, a) * cal(m, a));
	}
}
