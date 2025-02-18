#include<stdio.h>
void main()
{
	int i,j,k;
	
	for(i=1;i<=9;i++)
	{
		printf("\n");

		for(j=1;j<i;j++)
		{
			printf(" ");
		}

		for(k=i;k<=9;k++)
		{
			printf("*");
		}
	}
}