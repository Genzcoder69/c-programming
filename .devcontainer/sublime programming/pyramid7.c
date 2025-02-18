#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=9;i++) //rows
	{

		for(j=1;j<=i;j++) // columns
		{
			printf("%d",i);
		}

		printf("\n");
	}
}
