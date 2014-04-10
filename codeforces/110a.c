#include <stdio.h>
int islucky(int n) {
	char s[100];
	sprintf(s, "%d", n);
	int i, flag;
	flag = 1;
	for (i = 0; s[i] != '\0'; i++) {
		if(s[i] != '4' && s[i] != '7') {
			flag = 0;
		}
	}
	return flag;
}
int main()
{
	char str[100];
	int i,  count;
	while(scanf("%s", &str) != EOF) {
		count = 0;
		for (i = 0; str[i] != '\0'; i++) {
			if (str[i] == '4' || str[i] == '7') {
				count++;
			}
		}
		if (islucky(count)) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}
