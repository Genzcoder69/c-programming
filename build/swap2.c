#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("before swapping: a = %d, b = %d\n",a,b);


    a = a+b;
    b = a-b;
    a = a-b;

    printf("after swapping: a = %d, b = %d\n", a,b);
}