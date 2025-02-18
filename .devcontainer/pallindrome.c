#include <stdio.h>
void main()
{
    int num, reversed = 0, original;
    printf("Enter a three-digit number:");
    scanf("%d", &num);
    original = num;

    reversed += (num % 10) * 100;
    num /= 10;
    reversed += (num % 10) * 10;
    num /= 10;
    reversed += num;

    if (original == reversed)
    {
        printf("%d is a pallindrome number.\n", original);
    }

    else
    {
        printf("%d is not a pallindrome number.\n", original);
    }
}