#include <stdio.h>
void main()
{
    int n, sum = 0, product = 1;
    printf("Enter the value of n:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
        product *= i;
    }
    printf("Sum: %d, Product: %d\n", sum, product);
}