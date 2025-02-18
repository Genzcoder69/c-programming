#include <stdio.h>
void main()
{
    int num;

    // Take the number as an input from the user

    printf("Enter the number :");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i * num);
    }
}