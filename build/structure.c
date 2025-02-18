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
    struct student s1={69,7.9,"Abhinav Ahir"};

    printf("Roll No.= %d\n",s1.roll);
    printf("cgpa.= %f\n",s1.cgpa);
    printf("Name.=%s\n",s1.name);
}