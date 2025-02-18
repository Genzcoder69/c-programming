#include<stdio.h>
void main()
{
    int age = 22;
    int *ptr = &age;

    int _age = 23;
    int *_ptr = &_age;

    printf("%u, %u\ndifference = %u\n", ptr , _ptr , ptr - _ptr);
    _ptr = &age;
    printf("%u, %u\ncomparison = %u\n", ptr , _ptr , ptr == _ptr);

}