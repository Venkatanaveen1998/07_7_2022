#include<stdio.h>
int insertarray(int *a,int pos,int num,int n)
{
	int i,b[n+1];
	for(i=0;i<n+1;i++)
	{
		if(i<pos)
			b[i]=a[i];
		else if(i==pos) b[i]=num;
		else b[i]=a[i-1];
	}
	for(i=0;i<n+1;i++)
		printf("%d ",b[i]);
}
int uniqueele(int *a,int n)
{
	int cnt,i,j;
	for(i=0;i<n;i++)
	{
		cnt=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j]) cnt++;
		}
		if(cnt==1) printf("%d ",a[i]);
	}
}
int freq(int *a,int n)
{
	int i,j,cnt,s;
	for(i=0;i<n;i++)
	{
		 cnt=1;
		for(j=1;j<n;j++)
			if(a[i]==a[j])
			{
				if(a[i]==-1) break;
				s=a[j];
				a[i]=-1;
				 cnt++;
			}
		if(cnt>=1)
		printf(" element is %d  || %d \n",s,cnt);
	}
}
int sumfun(int *a,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
		sum=sum+a[i];
	printf("%d ",sum);
}

