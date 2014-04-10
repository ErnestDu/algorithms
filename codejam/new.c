#include <stdio.h>
#include <string.h>
#include <math.h>
long long int war(char s[]);
int main()
{
	int t;
	char s[100];
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%s", &s);
		printf("Case #%d: %lld\n", i+1, war(s));
	}
}

long long int war(char s[]) {
	int n, len, j, flag;
	long unsigned int sum;

	char d[100];
	len = strlen(s);
	d[1] = s[0];
	flag = 0;
	for (int i = 1; flag == 0 && i < len; i++) {
		if (s[i] != d[1]) {
			d[0] = s[i];
			flag = 1;
		}
	}
	j = 1;
	for (int i = 0; i < len; i++) {
		flag = 0;
		for (int k = 0; flag == 0 && k <= j; k++) {
			if (s[i] == d[k]) {
				flag = 1;
			}
		}
		if (flag == 0) { // new digit
			j = j + 1;
			d[j] = s[i];
		}
	}
	n = j+1;
	sum = 0;
	for (int i = 0; i < len; i++) {
		for (int k = 0; k < n; k++) {
			if (s[i] == d[k]) {
				sum += k * (long long int)pow(n, len - 1 - i);
			}
		}
	}
	return sum;
}
