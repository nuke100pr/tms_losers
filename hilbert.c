#include<stdio.h>
void main()
{
	int n;
	printf("\nEnter value of n=");
	scanf("%d",&n);
	int size=1;
	for(int i=1;i<=n;i++)
	{
		size=size*4;
	}
	int ar[size][size];
	int as[size][size];
	int am1[size][size];
	int am2[size][size];
	int ae[size][size];
	int s=1;
	int r=1;
	ar[0][0]=1;
	ar[0][1]=1;
	for(int k=1;k<=n;k++)
	{
		int l=1;
		for(int i=1;i<=k;i++)
			l=l*2;
		for(int i=0;i<s;i++)
		{
			as[i][0]=ar[i][1];
			as[i][1]=ar[i][0];
		}
		for(int t=0;t<s;t++)
			printf("(%d,%d) ",as[t][0],as[t][1]);
		for(int i=0;i<s;i++)
		{
			am1[i][0]=ar[i][0]+r;
			am1[i][1]=ar[i][1];
		}
		for(int t=0;t<s;t++)
			printf("(%d,%d) ",am1[t][0],am1[t][1]);
		for(int i=0;i<s;i++)
		{
			am2[i][0]=ar[i][0]+r;
			am2[i][1]=ar[i][1]+r;
		}
		for(int t=0;t<s;t++)
			printf("(%d,%d) ",am2[t][0],am2[t][1]);
		for(int i=0;i<s;i++)
		{
			ae[i][0]=ar[s-i-1][1];
			ae[i][1]=l+1-ar[i][0];
		}
		for(int t=0;t<s;t++)
			printf("(%d,%d) ",ae[t][0],ae[t][1]);
		for(int i=0;i<4*s;i++)
		{
			if(i<s)
			{
				ar[i][0]=as[i][0];
				ar[i][1]=as[i][1];
			}
			else if(i<2*s)
			{	
				ar[i][0]=am1[i-s][0];
				ar[i][1]=am1[i-s][1];
			}
			else if(i<3*s)
			{
				ar[i][0]=am2[i-2*s][0];
				ar[i][1]=am2[i-2*s][1];
			}
			else
			{
				ar[i][0]=ae[i-3*s][0];
				ar[i][1]=ae[i-3*s][1];
			}
		}
		s=s*4;
		r=r*2;
		printf("\n\n");
	}
}
