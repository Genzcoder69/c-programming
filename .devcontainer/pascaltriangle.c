#include <stdio.h>
void main()
{
    int n = 6;
    for (int line = 1; line <= n; line++)
    {
        for (int space = 0; space <= n - line; ++space)
            printf("   ");
        int coef = 1;
        for (int i = 1; i <= line; i++)
        {
            printf("%6d", coef);
            coef = coef * (line - i) / i;
        }
        printf("\n");
    }
}