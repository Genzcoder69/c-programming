// In an array of numbers find how many times does a number X occurs

#include<stdio.h>
void main()
{
    int arr[15] = { 2,2,2,1,2,3,4,5,6,7,8,9,10,2,2 };
    int count = 0;
    int x = 2;
    
    for ( int i = 0; i<15; i++)
    {
        if ( arr[i] == x )
        {
            count++;
        } 
    }

    printf(" The number %d occurs %d times in this Array\n", x , count);

}