#include <stdio.h>
#include <string.h>
char *reverse(char str[]) {
	int i;
	char temp;
	int len = strlen(str);
	for (i = 0; i < len / 2; i++) {
		temp = str[i];
		str[i] = str[len-1-i];
		str[len-1-i] = temp;
	}
	//printf("str %s\n", str);
	return str;
}

int main()
{
	char str1[1000];
	char str2[1000];
	while (scanf("%s", &str1) != EOF) {
		scanf("%s", &str2);
		if(strcmp(str1, reverse(str2)) == 0) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}
