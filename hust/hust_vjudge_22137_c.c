#include <stdio.h>
int main()
{
	int n, i, j, flag, end, count;
	long long int a[500000];
	int temp;
	while (scanf("%d", &n) != EOF) {
		if (n == 0)
			return 0;
		for (i = 0; i < n; i++) 
			scanf("%lld", &a[i]);
		end = 0;
		count = 0;
		while (end == 0) {
			flag = 0;
			for (j = 0; j < n - 1; j++) {
				if (a[j] > a[j+1]) {
					temp = a[j+1];
					a[j+1] = a[j];
					a[j] = temp;
					flag = 1;
					count++;
				}
			}
			if (flag == 0) 
				end = 1;
		}
		printf("%d\n", count);
	}
}
