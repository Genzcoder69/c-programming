// write a function named slice , which takes a string and returns a sliced string from index n to m

#include<stdio.h>
#include<string.h>

void slice( char str[], int n, int m);

void main()
{
    char str[] = "ABCDEFGHIJKL";
    slice(str, 4,10);
}

void slice( char str[], int n, int m)
{
    char newStr[100];
    int j=0;
    for ( int i=n; j<=n; i++,j++)
    {
        newStr[j] = str[i];
    }

    newStr[j] = '\0';
    puts(newStr);
}