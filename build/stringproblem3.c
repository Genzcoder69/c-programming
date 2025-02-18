// make a program that inputs user's name & print its length

#include <stdio.h>
#include<string.h>

void printString(char arr[]);
int countLength(char arr[]);

void main()
{
    char name[100];
    fgets ( name , 100, stdin);
    printf("Length is: %d", countLength(name));
}

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}

int countLength(char arr[])
{
    int count = 0;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }

    return count - 1;
}