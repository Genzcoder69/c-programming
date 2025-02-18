#include<stdio.h>
void main()
{
    /* int age = 20;
    int age = 30;
    int age = 40; */

    // normal method to define age

    int age[5];
    
    printf("First person's age:");
    scanf("%d", &age[0]);

    printf("Second person's age:");
    scanf("%d", &age[1]);

    printf("Third person's age:");
    scanf("%d", &age[2]);

    printf("Fourth person's age:");
    scanf("%d", &age[3]);

    printf("Fifth person's age:");
    scanf("%d", &age[4]);

    // Now we will make an array

    printf("First = %d,Second = %d,Third = %d,Four = %d,Five = %d",age[0],age[1],age[2],age[3],age[4]);

}