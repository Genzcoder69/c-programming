#include <stdio.h>
void main()
{
    char c;
    int vowel;
    printf("Enter an alphabet:");
    scanf("%c", &c);

    // now take the value for vowel
    vowel == (  c == 'a' || c == 'i' || c == 'o' || c == 'u' || c == 'e' ||
                c == 'A' || c == 'I' || c == 'O' || c == 'U' || c == 'E'   );

    if (vowel)
        printf("%c is a vowel.", c);

    else
        printf("%c is a constant.", c);
}
