#include <stdio.h>
#include <string.h>
int main()
{
	int n, k, i;
	//int d[1000];
	while (scanf("%d %d", &n, &k) != EOF) {
		int d[1000];
		memset(d, -1, 1000);
		for (i = 0; i < n; i++) {
			scanf("%d", &d[i]);
		}
		int count = 0;
		for (i = 0; i < k; i++) {
			if (d[i] > 0) {
				count++;
			}
		}
		int a = d[k - 1];
		for (i = k; d[i] == a && d[i] > 0; i++) {
			count++;
		}
		printf("%d\n", count);
	}
}
