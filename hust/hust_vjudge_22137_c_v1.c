#include <stdio.h>
#define MAX 500005
int a[MAX],t[MAX];
long long int count;
void merge(int l, int mid, int r) {
	int i = 1, j = mid + 1, k = 0;
	while (i <= mid && j <= r) {
		if (a[i] > a[j]) {
				t[k++] = a[j++];
				count += mid - i + 1;
		}
		else {
			t[k++] = a[i++];
		}
	}
	while(i<=mid) t[k++]=a[i++];
	while(j<=r) t[k++]=a[j++];

   	for(i=0; i<k; i++) {
	 	a[l+i]=t[i];
	}
}
			
void mergesort(int l, int r) {
	int mid = (l + r) / 2;
	if (l < r) {
		mergesort(l, mid);
		mergesort(mid+1, r);
		merge(l, mid, r);
	}
}
int main()
{
	int n, i;
	while (scanf("%d", &n) != EOF) {
		if (n == 0)
			return 0;
		for (i = 0; i < n; i++) 
			scanf("%d", &a[i]);
		count = 0;
		mergesort(0, n-1);
		printf("%lld\n", count);
	}
}
