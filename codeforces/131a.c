#include <stdio.h>
#include <ctype.h>
int main()
{
	char str[1000];
	int i, upper;
	while (scanf("%s", &str) != EOF) {
		upper = 1;
		for (i = 1; str[i] != '\0'; i++) {
			if (isupper(str[i]) == 0) {
				upper = 0;
			}
		}
		if (upper == 1) {
			for (i = 0; str[i] != '\0'; i++) {
				if (islower(str[i])) {
					str[i] = toupper(str[i]);
				}
				else {
					str[i] = tolower(str[i]);
				}
			}
		}
		printf("%s\n", str);
	}
}
