#include <stdio.h>
#include <string.h>
int get_last_integer(long long int x) {
	char s[20];
	int len;
	sprintf(s, "%lld", x);
	len = strlen(s);
	return s[len-1] - '0';
}

int main()
{
	int t;
	long long int n, i, m;
	int x;
	scanf("%d", &t);
	while (t--) {
		scanf("%lld", &n);
		x = get_last_integer(n);
		switch (x) {
			case 0:
			case 1:
			case 5:
			case 6: {
				printf("%d\n", x);
			}
			break;

			case 2: {
				if (n % 4 == 0) {
					printf("6\n");
				}
				else if (n % 4 ==  1) {
					printf("2\n");
				}
				else if (n % 4 == 2) {
					printf("4\n");
				}
				else {
					printf("8\n");
				}
			}
			break;

			case 3: {
				if (n % 4 == 0) {
					printf("1\n");
				}
				else if (n % 4 ==  1) {
					printf("3\n");
				}
				else if (n % 4 == 2) {
					printf("9\n");
				}
				else {
					printf("7\n");
				}
			}
			break;

			case 4: {
				if (n % 2 == 0) {
					printf("6\n");
				}
				else {
					printf("4\n");
				}
			}
			break;
			
			case 7: {
				if (n % 4 == 0) {
					printf("1\n");
				}
				else if (n % 4 == 1) {
					printf("7\n");
				}
				else if (n % 4 == 2) {
					printf("9\n");
				}
				else {
					printf("3\n");
				}
			}
			break;

			case 8: {
				if (n % 4 == 0) {
					printf("6\n");
				}
				else if (n % 4 == 1) {
					printf("8\n");
				}
				else if (n % 4 == 2) {
					printf("4\n");
				}
				else {
					printf("2\n");
				}
			}
			break;

			case 9: {
				if (n % 2 == 0) {
					printf("1\n");
				}
				else {
					printf("9\n");
				}
			}
			break;
		}
	}
}
