#include<stdio.h>
void main()
{
    char name[50];
    scanf("%s", name); // here we can skip the & sign bcz string is a character array and character array is a pointer
    printf("Your name is %s", name);
}