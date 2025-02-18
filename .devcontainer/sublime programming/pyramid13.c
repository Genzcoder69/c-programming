#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="INDIA";
	int i,j,len;
	len=strlen(str);
	for(i=0;i<len;i++)       // rows
	{
		for(j=0;j<=i;j++)  // columns
		{
			printf("%c",str[j]);
		}

		printf("\n");

	}
}