// code for print pyramid using numbers
#include <stdio.h>
void main()
{
    int i, j, rows;

    printf("enter the numbers of rows:");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)

    {
        for (j = 1; j <= i; j++)

        {
            printf("%d", j);
        }

        printf("\n");
    }
}