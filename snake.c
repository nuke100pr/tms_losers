#include<stdio.h>
void main()
{
	int c;
	printf("Enter c=");
	scanf("%d",&c);
	for(float i=2.0;i>=-2;i=i-0.3)
	{
		double x=c*i*i;
		for(int j=0;j<=x;j++)
			printf(" ");
		printf("*\n");
	}
}
