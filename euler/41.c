#include <stdio.h>
#include <string.h>
int isPandigit(int x) {
	char s[100];
	int len, temp, i;
	int a[10] = {0};
	sprintf(s, "%d", x);
	len = strlen(s);
	for (i = 0; i < len; i++) {
		temp = s[i] - '0';
		a[temp] += 1;
		if (a[temp] > 1) {
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	while (1) {
		scanf("%d", &n);
		printf("%d\n", isPandigit(n));
	}
}
