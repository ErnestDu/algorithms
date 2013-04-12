#include <stdio.h>
#define MAXSIZE 250
int main()
{
	int t, n, i;
	int start, end, max, temp;
	scanf("%d", &t);
	while (t--) {
		int c[MAXSIZE] = {0}; // c[i] is 0 if there's no initial value
		scanf("%d", &n);
		while (n--) {
			max = 0;
			scanf("%d %d", &start, &end);
			if (start < end) {
				for (i = ((start+1)/2); i <= ((end+1)/2); i++) 
					c[i] =  c[i] + 1;
			}
			else {
				for (i = ((end+1)/2); i <= ((start+1)/2); i++) 
					c[i] =  c[i] + 1;
			}
		}
		for (i = 0; i < MAXSIZE; i++) {
			if (max < c[i])
				max = c[i];
		}
		printf("%d\n", max * 10);		
	}
}
