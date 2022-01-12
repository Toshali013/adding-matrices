//program to add two amtrices using functions
#include<stdio.h>
int main()
{
	int m,n,c,d,first[10][10],second[10][10],sum[10][10];
	printf("\nEnter the number of rows and columnof matrix:");
	scanf("%d%d",&m,&n);
	printf("\nEnter the elements of first matrix:");
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			scanf("%d",&first[c][d]);
		}
	}
	printf("\nEnter the elements of second matrix:");
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			scanf("%d",&second[c][d]);
		}
	}
	printf("\nsum of entered matrix:\n");
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			sum[c][d]=first[c][d]+second[c][d];
			printf("%d\t",sum[c][d]);
		}
	    printf("\n");
	
	}
}
