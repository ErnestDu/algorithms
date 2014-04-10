#include <stdio.h>
#include <string.h>

char s[200][200];
int size;

void input(char s[][], char str[]);
int mkdir(char s[][], char str[]);

int main()
{
	int t, n, m, i, count, mc;
	char temp[200];
	scanf("%d", &t);
	count = 1;
	while (t--) {
		memset(s, '\0', 200 * 200);
		size = 0;
		scanf("%d %d", &n, &m);
		for (i = 0; i < n; i++) {
			scanf("%s", &temp);
			input(&s, temp);
		}
		mc = 0;
		for (i = 0; i < m; i++) {
			scanf("%s", &temp);
			mc += mkdir(s, temp);
			input(&s, temp);
		}
		printf("Case #%d: %d\n", count, mc);
		count++;
	}
}

void input(char s[][], char str[]) {
	int i;
	for (i = 0; i

}
int mkdir(char s[][], char str[]);

