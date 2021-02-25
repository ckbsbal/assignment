#include<stdio.h>
void main()
{
	int i,j,k,n=1;
	for(i=1;i<5;i++)
	{
		for(j=4;j>=i;j--)
		printf(" ");
		for(k=1;k<=n;k++)
		printf("*");
		n=n+2;
		printf("\n");
	}
}
