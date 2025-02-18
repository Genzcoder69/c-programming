#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=9;i++) // rows
	{
		printf("\n");
		
		for(j=1;j<=i;j++) // columns
		{
			printf("%d",j);
		}
	}
}