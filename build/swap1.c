#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers:");
    scanf("%D%D", &a, &b);
    printf("before swapping a = %d, b = %d", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping: a = %d, b = %d\n", a, b);
    return 0;
}