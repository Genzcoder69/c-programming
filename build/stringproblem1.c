#include <stdio.h>
void printString(char arr[]);

void main()
{
    char firstName[] = "Abhinav";
    char lastName[] = "Ahir";

    printString(firstName);
    printString(lastName);
}

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++) // remind that arr[i] != '\0'
    {
        printf("%c", arr[i]);
    }

    printf("\n");
}