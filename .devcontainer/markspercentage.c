#include <stdio.h>
void main()
{
    int m1, m2, m3, m4, m5, aggr;
    float per;
    printf("\nEnter the marks in 5 subjects:");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    aggr = m1 + m2 + m3 + m4 + m5;
    per = aggr / 5;
    

    printf("Aggregrate marks = %d\n", aggr);
    printf("Percentage marks = %f\n", per);
}