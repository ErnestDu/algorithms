#include <stdio.h>
int main()
{
	int n, i;
	int a[1000];
	while (scanf("%d", &n) != EOF) {
		int ec = 0; int oc = 0;
		int ep, op;
		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			if (a[i] % 2 == 0) {
				ec++;
				ep = i;
			} 
			else {
				oc++;
				op = i;
			}
		}
		if (ec > oc) {
			printf("%d\n", op + 1);
		} 
		else {
			printf("%d\n", ep + 1);
		}
	}
}
