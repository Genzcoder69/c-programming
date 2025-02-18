#include<stdio.h>
void main()
{
	char i,j,count='A';
	for(i='A';i<='F';i++) // rows
	{
		printf("\n");

		for(j='A';j<=i;j++) // columns
		{
			printf("%c",count);
			++count;
		}
	}
}