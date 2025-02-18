// Function for adding numbers
#include <stdio.h>
int sum(int, int); // function declaration
int main()
{
    int a = 10, b = 20, c = 30, d = 40;
    sum(a, b); // function called
    sum(c, d);
    return 0;
}

int sum(int x, int y) // function called

{
    int add;
    add = x + y;
    printf("sum is : %d", add);
    return 0;
}