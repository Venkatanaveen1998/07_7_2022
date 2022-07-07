#include<stdio.h>
#include"allheader.h"
int main()
{
	int n,i,cnt;
	printf("how many elements want to be insert\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	uniqueele(a,n);
	
}
