#include<stdio.h>
void main()
{
    int age,exp;
    printf("Enter the age of person:");
    scanf("%d", &age);
    printf("Enter the exp of person:");
    scanf("%d", &exp);

    if ( age >= 18 )
    {
        printf("Person is eligible for do work\n");

        if ( exp >= 5)
        {
            printf("Person is a senior software developer\n");
        }
        else
        {
            printf("Person is a junior software developer\n");
        }
    }
    else
    {
        printf("Person is not eligible for work\n");
    }
}    