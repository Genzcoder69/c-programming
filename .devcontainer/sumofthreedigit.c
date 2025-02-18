#include <stdio.h>
void main()
{
    int num, sum = 0;
    printf("Enter a three-digit number:");
    scanf("%d", &num);

    sum += num / 100;
    sum += (num / 10) % 10;
    sum += num % 10;

    printf("Sum of digits: %d\n", sum);
}