#include<stdio.h>
#include"allheader.h"
int main()
{
	int n,num,pos,i;
	printf("how many elements want to write\n");
	scanf("%d",&n);
	int a[n+1];
        for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("which num want to be insert\n");
	scanf("%d",&num);
	printf("in which position u want to insert\n");
	scanf("%d",&pos);
	insertarray(a,pos,num,n);
}
