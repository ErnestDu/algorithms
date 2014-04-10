#include <stdio.h>
#include <ctype.h>
int main()
{
	char str[2000];
	while (scanf("%s", &str) != EOF) {
		str[0] = toupper(str[0]);
		printf("%s\n", str);
	}
}
