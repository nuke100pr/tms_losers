#include<stdio.h>
void main()
{
	int a[]={3,1,2,4,5,7,6,9,8};
	int n=9;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);	
	}
}
