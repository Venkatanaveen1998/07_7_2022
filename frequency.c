#include<stdio.h>
int main()
{
	int n,i;
	printf("how many elements u want insert\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	freq(a,n);
}
