#include<stdio.h>
void main()
{
	int i,j,count=1;
	{
		for(i=1;i<=9;i++)
		{
			printf("\n");
			for(j=1;j<=i;j++)
			{
				printf("%d",count);
				++count;
			}
		}
	}
}