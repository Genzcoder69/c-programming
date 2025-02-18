#include<stdio.h>
void main()
{
	int i,j;   // i for rows and j for columns


	for ( i = 1; i<=9; i++) //for rows
	{
		for ( j = 9; j>=i; j--) //for columns
		{
			printf("*");
		}
	   printf("\n");
	}
}