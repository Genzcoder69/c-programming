// write a program to write all the odd numbers from 1 to n in a file 

#include<stdio.h>

void main()
{
    FILE *fptr;
    fptr =fopen("data.txt", "w");
    
    int n;
    printf("Enter number: ");
    scanf("%d", &n);


    for(int i = 1; i<=n; i++)
    {
        if( i % 2 != 0)
        {
            fprintf(fptr,"%d\n",i);
        }
    }









    fclose(fptr);
}