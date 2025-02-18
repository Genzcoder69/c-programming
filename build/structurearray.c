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

    struct student ece[5];

    {
        ece[0].roll = 10;
        ece[0].cgpa = 7.5;
        strcpy(ece[0].name, "Random person");

        printf("Name=%s\n", ece[0].name);
        printf("Cgpa=%f\n", ece[0].cgpa);
        printf("Roll=%d\n", ece[0].roll);

        ece[1].roll = 20; 
        ece[1].cgpa = 8.5;
        strcpy(ece[1].name, "Random person");

        printf("Name=%s\n", ece[1].name);
        printf("Cgpa=%f\n", ece[1].cgpa);
        printf("Roll=%d\n", ece[1].roll);

        ece[2].roll = 30;
        ece[2].cgpa = 7.5;
        strcpy(ece[2].name, "Random person");

        printf("Name=%s\n", ece[2].name);
        printf("Cgpa=%f\n", ece[2].cgpa);
        printf("Roll=%d\n", ece[2].roll);

        ece[3].roll = 40;
        ece[3].cgpa = 8.5;
        strcpy(ece[3].name, "Random person");

        printf("Name=%s\n", ece[3].name);
        printf("Cgpa=%f\n", ece[3].cgpa);
        printf("Roll=%d\n", ece[3].roll);

        ece[4].roll = 50;
        ece[4].cgpa = 9.5;
        strcpy(ece[4].name, "Random person");

        printf("Name=%s\n", ece[4].name);
        printf("Cgpa=%f\n", ece[4].cgpa);
        printf("Roll=%d\n", ece[4].roll);

    };


    struct student cse[5];

    {

        cse[0].roll = 10;
        cse[0].cgpa = 7.5;
        strcpy(cse[0].name, "Random person");

        printf("Name=%s\n", cse[0].name);
        printf("Cgpa=%f\n", cse[0].cgpa);
        printf("Roll=%d\n", cse[0].roll);

        cse[1].roll = 20; 
        cse[1].cgpa = 8.5;
        strcpy(cse[1].name, "Random person");

        printf("Name=%s\n", cse[1].name);
        printf("Cgpa=%f\n", cse[1].cgpa);
        printf("Roll=%d\n", cse[1].roll);

        cse[2].roll = 30;
        cse[2].cgpa = 7.5;
        strcpy(cse[2].name, "Random person");

        printf("Name=%s\n", cse[2].name);
        printf("Cgpa=%f\n", cse[2].cgpa);
        printf("Roll=%d\n", cse[2].roll);

        cse[3].roll = 40;
        cse[3].cgpa = 8.5;
        strcpy(cse[3].name, "Random person");

        printf("Name=%s\n", cse[3].name);
        printf("Cgpa=%f\n", cse[3].cgpa);
        printf("Roll=%d\n", cse[3].roll);

        cse[4].roll = 50;
        cse[4].cgpa = 9.5;
        strcpy(cse[4].name, "Random person");

        printf("Name=%s\n", cse[4].name);
        printf("Cgpa=%f\n", cse[4].cgpa);
        printf("Roll=%d\n", cse[4].roll);

    };


    struct student IT[5];

    {

        IT[0].roll = 10;
        IT[0].cgpa = 7.5;
        strcpy(IT[0].name, "Random person");

        printf("Name=%s\n", IT[0].name);
        printf("cgpa=%f\n", IT[0].cgpa);
        printf("Roll=%d\n", IT[0].roll);

        IT[1].roll = 20;
        IT[1].cgpa = 8.5;
        strcpy(IT[1].name, "Random person");

        printf("Name=%s\n", IT[1].name);
        printf("cgpa=%f\n", IT[1].cgpa);
        printf("Roll=%d\n", IT[1].roll);

        IT[2].roll = 30;
        IT[2].cgpa = 9.5;
        strcpy(IT[2].name, "Random person");

        printf("Name=%s\n", IT[2].name);
        printf("cgpa=%f\n", IT[2].cgpa);
        printf("Roll=%d\n", IT[2].roll);

        IT[3].roll = 40;
        IT[3].cgpa = 7.5;
        strcpy(IT[3].name, "Random person");

        printf("Name=%s\n", IT[3].name);
        printf("cgpa=%f\n", IT[3].cgpa);
        printf("Roll=%d\n", IT[3].roll);

        IT[4].roll = 50;
        IT[4].cgpa = 8.5;
        strcpy(IT[4].name, "Random person");

        printf("Name=%s\n", IT[4].name);
        printf("cgpa=%f\n", IT[4].cgpa);
        printf("Roll=%d\n", IT[4].roll);

    };


    struct student arts[5];

    {

        arts[0].roll = 10;
        arts[0].cgpa = 7.5;
        strcpy(arts[0].name, "Random person");

        printf("Name=%s\n", arts[0].name);
        printf("cgpa=%f\n", arts[0].cgpa);
        printf("Roll=%d\n", arts[0].roll);

        arts[1].roll = 20;
        arts[1].cgpa = 8.5;
        strcpy(arts[1].name, "Random person");

        printf("Name=%s\n", arts[1].name);
        printf("cgpa=%f\n", arts[1].cgpa);
        printf("Roll=%d\n", arts[1].roll);

        arts[2].roll = 30;
        arts[2].cgpa = 9.5;
        strcpy(arts[2].name, "Random person");

        printf("Name=%s\n", arts[2].name);
        printf("cgpa=%f\n", arts[2].cgpa);
        printf("Roll=%d\n", arts[2].roll);

        arts[3].roll = 40;
        arts[3].cgpa = 7.5;
        strcpy(arts[3].name, "Random person");

        printf("Name=%s\n", arts[3].name);
        printf("cgpa=%f\n", arts[3].cgpa);
        printf("Roll=%d\n", arts[3].roll);

        arts[4].roll = 50;
        arts[4].cgpa = 8.5;
        strcpy(arts[4].name, "Random person");

        printf("Name=%s\n", arts[4].name);
        printf("cgpa=%f\n", arts[4].cgpa);
        printf("Roll=%d\n", arts[4].roll);

    };

}