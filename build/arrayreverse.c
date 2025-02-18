#include<stdio.h>
void reverse( int arr[] , int n);
void print( int arr[] , int n);

void main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9};
    reverse(arr,9);
    print(arr,9);
}


void reverse( int arr[], int n)
{
    for (int i=0; i<n/2; i++)
    {
        int firstValue = arr[i];
        int secondValue = arr[n - i -1];

        arr[i]= secondValue;
        arr[n-i-1]=firstValue;
    }
}

void print( int arr[], int n)
{
    for (int i = 0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}