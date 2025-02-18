// write a function to count the occurrence of vowels in a string

#include<stdio.h>
#include<string.h>

int countVowels( char str[]);

void main()
{
    char str[] = "NeverEverForever";
    printf("vowels are %d", countVowels(str));
}

int countVowels( char str[])
{
    int count = 0;
    for( int i=0; str[i] != '\0'; i++)
    {
        if( str[i] == 'a' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'e'||
            str[i] == 'A' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'E' )
            {
                count++;
            }
    }

    return count;
}