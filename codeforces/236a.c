#include <stdio.h>
#include <string.h>
int main()
{
	char str[1000];
	int d[30], i, count;
	while (scanf("%s", &str) != EOF) {
		memset(d, 0, 30 * sizeof(int)); 
		for (i = 0; str[i] != '\0'; i++) {
			d[str[i] - 'a']++;
		}
		count = 0;
		for (i = 0; i < 26; i++) {
			if (d[i] > 0) {
				count++;
			}
		}
		if (count % 2 == 0) {
			printf("CHAT WITH HER!\n");
		}
		else {
			printf("IGNORE HIM!\n");
		}
	}
}
