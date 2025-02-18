// code for printing day name using switch statements
#include <stdio.h>
void main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        num = 1;
        printf("MONDAY\n");
        break;

    case 2:
        num = 2;
        printf("TUESDAY\n");
        break;

    case 3:
        num = 3;
        printf("WEDNESDAY\n");
        break;

    case 4:
        num = 4;
        printf("THURSDAY\n");
        break;

    case 5:
        num = 5;
        printf("FRIDAY\n");
        break;

    case 6:
        num = 6;
        printf("SATURDAY\n");
        break;

    case 7:
        num = 7;
        printf("SUNDAY\n");
        break;

    default:
        printf("Number is invalid.");
    }
}