#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	int len, i, uc, lc;
	char s[1000];
	while (scanf("%s", &s) != EOF) {
		len = strlen(s);
		uc = 0;
		for (i = 0; i < len; i++) {
			if(isupper(s[i])) {
				uc++;
			}
		}
		lc = len - uc;
		if (uc > lc) {
			for (i = 0; i < len; i++) {
				printf("%c", toupper(s[i]));
			}
		}
		else {
			for (i = 0; i < len; i++) {
				printf("%c", tolower(s[i]));
			}
		}
		printf("\n");
	}
}
