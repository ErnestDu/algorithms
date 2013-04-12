#include <stdio.h>
#include <string.h>
int main()
{
	int i, sum;
	char s[1000];
	while (gets(s) && strcmp(s, "#") != 0) {
		sum = 0;
		for (i = 0; s[i] != '\0'; i++) {
			if (s[i] == ' ') {// space
				// do nothing
			}
			else {
				sum += (i + 1) * (s[i] - 'A' + 1);
			}
		}
		printf("%d\n", sum);
	}
}
