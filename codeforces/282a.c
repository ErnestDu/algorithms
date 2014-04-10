#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	char s[100];
	int result;
	while (scanf("%d", &n) != EOF) {
		result = 0;
		while (n--) {
			scanf("%s", &s);
			if (strcmp(s, "++X") == 0 || strcmp(s, "X++") == 0) {
				result++;
			}
			else {
				result--;
			}
		}
		printf("%d\n", result);
	}
}
