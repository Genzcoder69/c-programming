#include <stdio.h>
void main()
{
    int num1,num2,num3;
    printf("Enter the value of %d");
    scanf("%d", &num1);
    printf("Enter the value of %d");
    scanf("%d", &num2);
    printf("Enter the value of %d");
    scanf("%d", &num3);

    if (num1 < num2 && num1 < num3)

        printf(" value of min number is %d", num1);
    else if (num2 < num3 && num2 < num1)

        printf(" value of min number is %d", num2);
}