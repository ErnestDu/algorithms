#include <stdio.h>
#include <stdlib.h>
int cmp(const void *p1, const void *p2) {
    int x = * (int * const *) p1; 
    int y = * (int * const *) p2; 
	return y - x;
}

int main()
{
	int n, m, i, j;
	int d[500000];
	int a[3000];
	int count;
	while (scanf("%d %d", &n, &m) != EOF) {
		memset(d, 0, 500000 * sizeof(int));
		memset(a, 0, 3000 * sizeof(int));
		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		qsort(a, n, sizeof(int), cmp);
		count = 0;
		for (i = 0; i < m; i++) {
			for (j = i + 1; j < m; j++) {
				d[count++] = a[i] + a[j];
			}
		}
		qsort(d, count, sizeof(int), cmp);
		printf("%d", d[0]);
		for (i = 1; i < m; i++) {
			printf(" %d", d[i]);
		}
		printf("\n");
	}
}
