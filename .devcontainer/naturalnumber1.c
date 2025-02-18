#include <stdio.h>
void main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Number: %d, Square: %d, Cube: %d\n", i, i * i, i * i * i);
    }
}