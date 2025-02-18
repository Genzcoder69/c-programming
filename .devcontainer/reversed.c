#include <stdio.h>
void main()
{
    int num, reversed = 0;
    printf("Enter a three-digit number:");
    scanf("%d", &num);

    reversed += (num % 10) * 100;
    num /= 10;
    reversed += (num % 10) * 10;
    num /= 10;
    reversed += num;
    printf("Reversed number:%d\n", reversed);
}