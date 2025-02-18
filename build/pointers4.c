#include<stdio.h>

void doWork(int a, int b, int *sum, int *prod, int *avg);

void main()
{
    int a = 2 , b = 2;
    int sum,prod,avg;
    doWork(a,b,&sum,&prod,&avg);

    printf("sum = %d\n prod = %d\n avg = %d\n", sum,prod,avg);
    
}

void doWork(int a, int b, int *sum, int *prod, int *avg)
{
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}