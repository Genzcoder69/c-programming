// write a program to print the largest number in an array 

#include<stdio.h>
void main()
{
    int arr[5] = {22,33,44,999,55};
    int i,n,max;

    printf("Enter the number of elements in the array:");
    scanf("%d", &n);
    printf("Enter the elements of the array:");


    for ( int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    
    for ( int i=1; i<n; i++)
    {
        if ( arr[i] > max)
        {
            max = arr[i];
        }
    }


    printf("The largest number in the array is:%d\n", max);
}