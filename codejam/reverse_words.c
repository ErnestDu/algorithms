#include <stdio.h>
#include <string.h>
int main()
{
	char s[2000];
	char temp[2000];
	int n, count, i, j, k, len;
	scanf("%d\n", &n);
	count = 1;
	while (n--) {
		gets(s);
		printf("Case #%d: ", count);
		count++;
		len = strlen(s);
		j = 0;
		for (i = len - 1; i >=0; i--) {
			if (s[i] != ' ') {
				temp[j] = s[i];
				j++;
			} else {
				for (k = j - 1; k >= 0; k--) {
					putchar(temp[k]);
				}
				printf(" ");
				j = 0;
			}
		}
		for (k = j - 1; k >= 0; k--) {
				putchar(temp[k]);
		}
		printf("\n");		
	}
}
