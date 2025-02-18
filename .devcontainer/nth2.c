#include <stdio.h>
void main()
{
    int n;

    printf("Enter the number of terms:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d", 2 * i);
    }
    printf("\n");
}