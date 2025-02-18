#include <stdio.h>
void main()
{
    // marks of 2 students of 3 subjects
    int marks[2][3] = {{10,20,30},{40,50,60}}; // _ _ _ | _ _ _ ]

    // it's explanation is here
    
    /*  marks[0][0]=10;
    marks[0][1]=20;
    marks[0][2]=30;

    marks[1][0]=40;
    marks[1][1]=50;
    marks[1][2]=60;
*/
    printf("%d\n", marks[1][1]);
}