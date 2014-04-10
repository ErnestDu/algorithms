#include <stdio.h>
#include <string.h>
int main()
{
	int n, i, sum, count;
	int a[1000];
	while (scanf("%d", &n) != EOF) {
		memset(a, 0, sizeof(int) * 1000);
		sum = 0;
		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			sum += a[i];
		}
		count = 0;
		for (i = 0; i < n; i++) {
			if (((sum % 2) + (a[i] % 2)) % 2 == 0) {
				count++;
			}
		}
		printf("%d\n", count);
	}
}
