#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, count, cc;
    char str[1000];
    char temp[1000];
    char str1[1000];
    while (scanf("%d", &n) != EOF) {
        scanf("%s", &str);
        count = 1;
        for (i = 1; i < n; i++) {
            scanf("%s", &temp);
            if (strcmp(temp, str) == 0) {
                count++;
            } else {
                strcpy(str1, temp);
            }
        }
        cc = n - count;
        if (count > cc) {
            printf("%s\n", str);
        }
        else {
            printf("%s\n", str1);
        }
    }
}
