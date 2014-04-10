#include <stdio.h>

#define MAX 500005
int a[MAX],t[MAX];
long long int cnt;

void Merge(int l,int mid,int r)
{
    int i=l,j=mid+1,k=0;
    while(i<=mid && j<=r)
    {
        if(a[i]>a[j]) 
        {
            t[k++]=a[j++];
            cnt+=mid-i+1;
        }
        else
        {
            t[k++]=a[i++];
        }

    }

    while(i<=mid) t[k++]=a[i++];
    while(j<=r) t[k++]=a[j++];

    //将归并完成的结果复制到原数组中
    for(i=0; i<k; i++)
    {
        a[l+i]=t[i];
    }
}

void MergeSort(int l,int r)
{
    int mid=(l+r)/2;
    if(l<r)
    {
        MergeSort(l,mid);
        MergeSort(mid+1,r);
        Merge(l,mid,r);
    }
}

int main(){
    int n,i;
    while( scanf("%d",&n)!=EOF && n)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        cnt=0;
        MergeSort(0,n-1);
        printf("%lld\n",cnt);
    }
    return 0;
}
