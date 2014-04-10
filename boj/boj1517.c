#include <stdio.h>
#include <math.h>
int judge (int x) 
{
	int i, upper;
	upper = (int)sqrt(x) + 1;
	if (x <= 1) {
		return 0;
	}
	for (i = 2; i < upper; i++) {
		if (x % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main()
{
	int x;
	while (scanf("%d", &x) != EOF) {
		printf("%d", judge(x));
	}
}
