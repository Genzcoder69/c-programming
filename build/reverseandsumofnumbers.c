#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    int sum = 0;
    for (int j=n; j>=1; j--)
    {
        sum = sum + j;                                 //  we can write sum += i
        printf("%d\n", j);
    }
    printf("sum is %d\n", sum);
}   