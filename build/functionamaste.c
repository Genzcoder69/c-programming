#include <stdio.h>

// we have to declare the function / prototype
void india();
void america();
void arabic();
void russia();
void french();

// we have to call the function
void main()
{
    char ch;
    printf("Enter the char:");
    scanf("%c", &ch);
    if (ch == 'i')
    {
        printf("NAMASTE\n");
    }
        else if (ch == 'a')
            {
                printf("HELLO\n");
            }
                else if (ch == 'u')
                    {
                        printf("AHLAAN\n");
                    }
                        else if (ch == 'r')
                            {
                                printf("PRIVET\n");
                            }
                                else if (ch == 'f')
                                    {
                                        printf("BONJOUR\n");
                                    }
                                        else
                                            {
                                                printf("wrong keyword.");
                                            }
}


// Now we have to define the function ( function definition)

void india()
{
    printf("NAMASTE\n");
}

void america()
{
    printf("HELLO\n");
}

void arabic()
{
    printf("AHLAAN\n");
}

void russia()
{
    printf("PRIVET\n");
}

void french()
{
    printf("BONJOUR\n");
}