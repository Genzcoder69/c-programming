#include<stdio.h>

int calcPercentage( int Physics , int Chemistry , int Math , int English , int Hindi);

void main()
{
    int Phy  = 74;
    int Chem = 85;
    int Math = 81;
    int Eng  = 78;
    int Hin  = 74;

    printf("Percentage is: %d", calcPercentage (Phy , Chem , Math , Eng , Hin));
}

int calcPercentage( int Physics , int Chemistry , int Math , int English , int Hindi)
{
    return (( Physics + Chemistry + Math + English + Hindi) / 5);
}