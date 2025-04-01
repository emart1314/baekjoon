#include<stdio.h>

int main()
{
	int a,i,j;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		for(j=a-i-1;j>0;j--)
		{
			printf(" ");
		}
		
		for(j=0;j<2*i+1;j++)
		{
			printf("*");
		}
	
		printf("\n");
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(j=2*a-3-2*i;j>0;j--)
		{
			printf("*");
		}
	
		printf("\n");
	}
}