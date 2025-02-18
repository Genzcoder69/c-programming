#include<stdio.h>
void main()
{
    int row,column,first_no = 0, second_no = 1, sum = 1;
    for ( row = 1; row <= 4; row++)
    {
        for(column = 1; column <= row; column++)
        {
            if(row == 1 && column == 1)
            {
                printf("0");
                continue;
            }
            printf("%d\t", sum);
            sum = first_no + second_no;
            first_no = second_no;
            second_no = sum;
        }
        printf("\n");
    }
}