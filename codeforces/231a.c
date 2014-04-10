#include <stdio.h>
int main()
{
	int n, i, j, a, count, x;
	while (scanf("%d", &n) != EOF) {
		//memset(q, 0, 2000 * 10 sizeof(int));
		count = 0;
		for (i = 0; i < n; i++) {
			a = 0;
			for (j = 0; j < 3; j++) {
				scanf("%d", &x);
				if (x == 1) {
					a++;
				}
			}
			if (a >= 2) {
				count++;
			}
		}
		printf("%d\n", count);
	}
}
		
