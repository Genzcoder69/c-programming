// write a program to store the data of 3 students

#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

void main()
{
    struct student s1;
    {
        strcpy(s1.name, "Random 1st person");
        s1.roll = 69;
        s1.cgpa = 7.5;

        printf("Student name: %s\n", s1.name);
        printf("student roll no.: %d\n", s1.roll);
        printf("Student cgpa: %f\n", s1.cgpa);
    };

    struct student s2;
    {
        strcpy(s2.name, "Random 2nd person");
        s2.roll = 60;
        s2.cgpa = 8.5;

        printf("Student name: %s\n", s2.name);
        printf("Student roll no.: %d\n", s2.roll);
        printf("Student cgpa: %f\n", s2.cgpa);
    };

    struct student s3;
    {
        strcpy(s3.name, "Random 3rd person");
        s3.roll = 50;
        s3.cgpa = 9.5;

        printf("Student name: %s\n", s3.name);
        printf("Student roll no.: %d\n", s3.roll);
        printf("Student cgpa :%f\n", s3.cgpa);
    };
}
