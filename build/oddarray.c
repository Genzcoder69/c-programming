#include <stdio.h>

int countOdd(int arr[], int n);

void main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9};
    printf("%d", countOdd(arr,9));
}

int countOdd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0) // that's mean odd number
        {
            count++;
        }
    }

    return count;

}