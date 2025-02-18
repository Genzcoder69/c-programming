// write a program to insert an element at the end of an array


#include <stdio.h>
void main()
{
    int arr[10];
    int i,n,element;

    printf("Enter the number of elements in the array:");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be inserted at the end:");
    scanf("%d", &element);

    arr[n] = element;
    n++;

    printf("The updated array is:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}