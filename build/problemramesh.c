// calculation of Ramesh's gross salary
#include<stdio.h>
void main()
{
    float bp,da,hra,grpay;
    printf("\n Enter basic salary of Ramesh:");
    scanf("%f", & bp);

    da = .4 * bp;
    hra = .2 * bp;
    grpay = bp + da + hra;
    printf("Basic salary of Ramesh = %f \n", bp);
    printf("Dearness allowance = %f      \n", da);
    printf("House rent allowance = %f     \n", hra);
    printf("Gross pay of Ramesh is %f      \n", grpay);
}