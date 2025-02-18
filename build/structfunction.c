#include<stdio.h>
#include<string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

void printinfo( struct student s1);

void main()
{
    struct student s1 = { "Abhinav Ahir", 69, 7.9};
    printinfo(s1);
    s1.roll = 60;
    printf("student.roll=%d\n", s1.roll);

}

void printinfo( struct student s1)
{
    printf("STUDENT INFORMATION:\n");
    printf("student.roll=%d\n", s1.roll);
    printf("student.cgpa=%f\n", s1.cgpa);
    printf("student.name=%s\n", s1.name);
}