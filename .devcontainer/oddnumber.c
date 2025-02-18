#include <stdio.h>
void main()
{
    int n;
    do
    {
        printf("Enter a number:");
        scanf("%d", &n);
        printf("Even\n", n);

        if (n % 2 != 0)
        {
            break;
        }
    }

    while (1);
    printf("You entered an odd number.");
}