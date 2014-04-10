#include <stdio.h>
int main()
{
	int w;
	while (scanf("%d", &w) != EOF) {
		if(w % 2 == 0 && w > 2)
			printf("YES\n");
		else 
			printf("NO\n");
	}
}
