#include <stdio.h>
#include <ctype.h>
int main()
{
	char str[1000];
	int i;
	while (scanf("%s", &str) != EOF) {
		for (i = 0; str[i] != '\0'; i++) {
			str[i] = tolower(str[i]);
			if (str[i] != 'a' && str[i] != 'o' && str[i] != 'y' &&
				str[i] != 'e' && str[i] != 'u' && str[i] != 'i') {
				printf(".%c", str[i]);
			}
		}
		printf("\n");
	}
}
