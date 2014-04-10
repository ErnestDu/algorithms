#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int comp(const void *a, const void *b)
{
	return (*(int *)b - *(int *)a);
}
int main()
{
	int n, i, j;
	int s[100000], flag[100000];
	while (scanf("%d", &n) != EOF) {
		memset(s, 0, 100000);
		for (i = 0; i < n; i++) {
			scanf("%d", &s[i]);
		}
		int count = 0;
		qsort(s, n , sizeof(int), comp);
		for (i = 0; i < n; i++) {
//			printf("%d ", s[i]);
		}
//		printf("\n");
		memset(flag, 0, 100000);
		for (i = 0; i < n; i++) {
//			printf("s[%d]:%d\n", i, s[i]);
			if (flag[i] == 0) {
				if (s[i] == 4) {
					count++;
#ifdef DEBUG
					printf("%d ++\n", s[i]);
#endif

					flag[i] = 1;
				}
				else if (s[i] == 3) {
					// 3 + 1
					for (j = i + 1; j < n && flag[i] == 0 ; j++) {
						if (s[j] == 1 && flag[j] == 0) {
							flag[i] = 1;
							flag[j] = 1;
							count++;
#ifdef DEBUG
					printf("%d %d+++\n", s[i], s[j]);
#endif


						}
					}
					// no group of 1 person found
					if (flag[i] == 0) {
						count++;
						flag[i] = 1;
#ifdef DEBUG
					printf("%d ++\n", s[i]);
#endif


					}
				}
				else if (s[i] == 2) {
					// 2 + 2
					for (j = i + 1; j < n; j++) {
						if (s[j] == 2 && flag[i] == 0 && flag[j] == 0) {
							flag[i] = 1;
							flag[j] = 1;
							count++;
#ifdef DEBUG
					printf("%d %d++\n", s[i], s[j]);
#endif


						}
					}
					if (flag[i] == 0) {
						for (j = i + 1; j < n; j++) {
							if (s[j] == 1 && s[j+1] == 1 && flag[j] == 0 && flag[j+1] == 0) {
								flag[i] = 1;
								flag[j] = 1;
								flag[j+1] = 1;
#ifdef DEBUG
					printf("%d %d %d ++\n", s[i], s[j], s[j+1]);
#endif


								count++;
							}
							else if (s[j] == 1) {
								flag[i] = 1;
								flag[j] = 1;
								count++;
#ifdef DEBUG
					printf("%d %d ++\n", s[i], s[j]);
#endif


							}
						}
					}
					if(flag[i] == 0) {
						flag[i] = 0;
						count++;
#ifdef DEBUG
					printf("%d ++\n", s[i]);
#endif


					}
				}
				else if (s[i] == 1) {
					if (i + 1 < n && i + 2 && i + 3< n) {
						flag[i] = 1;
						flag[i+1] = 1;
						flag[i+2] = 1;
						flag[i+3] = 1;
						count++;
#ifdef DEBUG
					printf("%d %d %d %d++\n", s[i], s[i+1], s[i+2], s[i+3]);
#endif


					}
					else if (i + 1 < n && i + 2) {
						flag[i] = 1;
						flag[i+1] = 1;
						flag[i+2] = 1;
#ifdef DEBUG
					printf("%d ++\n", s[i], s[i+1], s[i+2]);
#endif


						count++;
					}
					else if (i + 1 < n) {
						flag[i] = 1;
						flag[i+1] = 1;
						count++;
#ifdef DEBUG
					printf("%d %d++\n", s[i], s[i+2]);
#endif


					}
					else {
						flag[i] = 1;
						count++;
#ifdef DEBUG
					printf("%d ++\n", s[i]);
#endif


					}
				}
			}
		}
		printf("%d\n", count);
	}
}
