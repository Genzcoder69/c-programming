#include<stdio.h>
void main()
{
	char i,j;
	for(i=1;i<=9;i++)
	{
		printf("\n");

		for(j=1;j<=i;j++)
		{
			printf("%c",i);
		}
	}
}