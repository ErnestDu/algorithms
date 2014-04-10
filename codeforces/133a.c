#include <stdio.h>
int main()
{
	char str[1000];
	int i, flag;
	while (scanf("%s", &str) != EOF) {
		flag = 0;
		for (i = 0; str[i] != '\0'; i++) {
			if (str[i] == 'H' || str[i] == 'Q' ||
				str[i] == '9') {
				flag = 1;
			}
		}
		if (flag) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}

