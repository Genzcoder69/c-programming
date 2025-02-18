#include<stdio.h>
void main()
{
	char i,j;
	for(i=65;i<=69;i++) // rows
	{
		printf("\n");

		for(j=65;j<=i;j++) // columns
		{
			printf("%c",i);
		}
	}
}