#include <stdio.h>
#include <string.h>
int dist (int y) {
    char str[10];
    int i, j;
    sprintf(str, "%d", y);
//    printf("%s\n", str);
    int len = strlen(str);
    for (i = 0; i < len; i++) {
        for (j = i+1; j < len; j++) {
            if (str[i] == str[j]) {
                return 0;
            }
        }
    }
    return 1;
}

int find_next(int y) 
{
    int found = 0;
    while (found == 0) {
        y++;
        found = dist(y); 
    }
    return y;
}

int main()
{
    int y;
    while (scanf("%d", &y) != EOF) {
        int n = find_next(y);
        printf("%d\n", n);
    }
}
