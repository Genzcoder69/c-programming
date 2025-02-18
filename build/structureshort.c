#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

void main()
{
    struct student s1 = {69,7.9,"Abhinav Ahir"};
    printf("Name = %s\n", s1.name);
    printf("Roll No.= %d\n", s1.roll);
    printf("Cgpa=%f\n", s1.cgpa);
}