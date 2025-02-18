#include<stdio.h>

void printNumbers(int arr[] , int n);

void main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    printNumbers( arr , 10);
}

void printNumbers( int arr[] , int n)
{
    for ( int i=0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}