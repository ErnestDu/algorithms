#include <stdio.h>
#include <string.h>
int cmp(const void *p1, const void *p2) {
	int x = * (int * const *) p1;
	int y = * (int * const *) p2;
/*	if (x > y)
		return 1;
	else if (x == y) 
		return 0;
	else 
		return -1;
		*/
	return x - y;
}

int main()
{
	int n, i;
	int m[10000];
	while (scanf("%d", &n) != EOF) {
		memset(m, 0, 10000*sizeof(int));
		for (i = 0; i < n; i++) {
			scanf("%d", &m[i]);
		}
		qsort(m, n, sizeof(int), cmp);
	//	for (i = 0; i < n; i++) {
	//		printf("%d ", m[i]);
	//	}
		printf("%d\n", m[n/2]);
	}
}
