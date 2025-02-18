#include <stdio.h>
void main()
{
    int num;
    printf("Enter a natural number:");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%dx%d = %d\n", num, i, num * i);
    }
}