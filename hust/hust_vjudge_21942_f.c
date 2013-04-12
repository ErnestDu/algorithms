// http://poj.org/showmessage?message_id=168827
#include<stdio.h>
#include<string.h>
int j=0,len;
char a[27],b[27];
int getposition(char c)
{
	int i;
	for(i=0;i<len;i++)
		if(b[i]==c)
			return i;
}
void postorder(int s,int t)
{
	int mid;
	if(s==t)
	{
		printf("%c",b[s]);
		j++;
		return;
	}
	mid=getposition(a[j++]);
	if(s<=mid-1)
	    postorder(s,mid-1);
	if(mid+1<=t)
    	postorder(mid+1,t);
	printf("%c",b[mid]);
}	
void main()
{
	while(scanf("%s%s",a,b)!=EOF)
	{
		j=0;
		len=strlen(a);
		postorder(0,len-1);
		printf("\n");
	}
}
