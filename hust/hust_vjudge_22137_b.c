#include <stdio.h>
int main()
{
	int n, m, i, j;
	int d[10000];
	int a[3000];	
	while (scanf("%d %d", &n, &m) != EOF) {
		memset(d, 0, 10000 * sizeof(int));
		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		for (i = 0; i < n; i++) {
			for (j = i + 1; j < n; j++) {
				d[a[i] + a[j]]++;
			}
		}
		int count = 0;
		for (i = 10000; i >= 0; i--) {
			while (d[i]--) {
				if (count != m && count == 0) {
					printf("%d", i);
					count++;
				}
				else if (count != m) {
					printf(" %d", i);
					count++;
				}
			}
		}
		printf("\n");
	}
}
