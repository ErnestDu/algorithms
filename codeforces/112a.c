#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char str1[1000];
	char str2[1000];
	while (scanf("%s", &str1) != EOF) {
		scanf("%s", &str2);
		for (i = 0; str1[i] != '\0'; i++) {
			str1[i] = tolower(str1[i]);
		}
		for (i = 0; str2[i] != '\0'; i++) {
			str2[i] = tolower(str2[i]);
		}

		if(strcmp(str1, str2) < 0) {
			printf("-1\n");
		}
		else if (strcmp(str1, str2) > 0) {
			printf("1\n");
		}
		else {
			printf("0\n");
		}
	}
}
