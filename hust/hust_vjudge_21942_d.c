#include <stdio.h>
#include <string.h>
int add(char sum[], char x[]) {
	int i, j, len, a, b, c;
	char temp[150];
	char temp2[150];
	for (i = 0; i < 150; i++) {
		temp[i] = '0';
		temp2[i] = '0';
	}
	j = 0;
	for (i = (strlen(sum) - 1); i >= 0; i--) {
		temp[j] = sum[i];
		j++;
	}
	j = 0;
	for (i = (strlen(x) - 1); i >= 0; i--) {
		temp2[j] = x[i];
		j++;
	}

	c = 0;
	for (i = 0; i < 150; i++) {
		//temp[i] = temp[i] + x[len-1-i];
		a = temp[i] - '0';
		b = temp2[i] - '0';
		if (a + b + c < 10) {
			a = a + b + c;
			c = 0;
			temp[i] = '0' + a;
		}
		else {
			a = a + b + c - 10;
			temp[i] = '0' + a;
			c = 1;
		}
	}
//	temp[149] = '\0';
//	printf("temp %s\n", temp);
	int flag = 0;
	j = 0;
	for (i = 149; i >= 0; i--) {
		if (temp[i] != '0') 
			flag = 1;
		if (flag == 1) {
			sum[j] = temp[i];
			j++;
		}
	}
	sum[j] = '\0';
}
int main()
{
	char n[150];
	char sum[150] = "0";
	while (1) {
		scanf("%s", &n);
		if (strcmp(n, "0") == 0) { 
			printf("%s\n", sum);
			return 0;
		}
		add(sum, n);
	}
}
