// check if a given character is present in a string or not

#include<stdio.h>
#include<string.h>

void checkChar( char str[], char ch);

void main()
{
    char str[] = "AbhinavAhir";
    char ch = 'a';
    checkChar( str, ch);
}

void checkChar( char str[], char ch)
{
    for( int i = 0; str[i] != '\0'; i++)
    {
        if( str[i] == ch)
        {
            printf("Character is present!");
            return;
        }
    }
    printf("Character is not present!");
}