// code for print odd numbers from 1 to 50 
#include <stdio.h>
void main()
{
    for( int i = 1; i<=50; i++)
    {
        if( i % 2 !=0)
        {
            printf("%d\n", i);
        }
    }
}