#include<stdio.h>
void main()
{
    int gender,age,exp;   // here we denote male with 1 and female with 0 in gender option

    printf("Gender of person:");
    scanf("%d",&gender);

    printf("Age of person:");
    scanf("%d",&age);

    printf("Exp of person:");
    scanf("%d",&exp);

    if ( gender == 1 )
    {
        printf("Male can do work\n");
        
        if ( age > 18)

        {
            printf("He is a Employee\n");

            if ( exp > 5)
            {
                printf("He is a senior software developer\n");
            }

            else
            { 
                printf("He is a junior software developer\n");
            }

        }

        else
        {
            printf("He is a freelancer\n");
        }

    }

    else if ( gender == 0)
    
    {
        printf("Females can't do work\n");
    }

    else
    {
        printf("sorry! You entered wrong number");
    }

}