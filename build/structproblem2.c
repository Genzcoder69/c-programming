// Enter address of 5 people using their House No., Block , City and state 

#include<stdio.h>
#include<string.h>

typedef struct address
{
    int HouseNo;
    int Block;
    char city[100];
    char state[100];
} add;

void printInfo(struct address add);

void main()
{
    add add[5];
    
    printf("Enter info of person1:\n");
    
    scanf("%d", &add[0].HouseNo);
    scanf("%d", &add[0].Block);
    scanf("%s", add[0].city);
    scanf("%s", add[0].state);

    printf("Enter info of person2:\n");
    scanf("%d", &add[1].HouseNo);
    scanf("%d", &add[1].Block);
    scanf("%s", add[1].city);
    scanf("%s", add[1].state);
    
    printf("Enter info of person3:\n");
    scanf("%d", &add[2].HouseNo);
    scanf("%d", &add[2].Block);
    scanf("%s", add[2].city);
    scanf("%s", add[2].state);
    
    printf("Enter info of person4:\n");
    scanf("%d", &add[3].HouseNo);
    scanf("%d", &add[3].Block);
    scanf("%s", add[3].city);
    scanf("%s", add[3].state);
    
    printf("Enter info of person5:\n");
    scanf("%d", &add[4].HouseNo);
    scanf("%d", &add[4].Block);
    scanf("%s", add[4].city);
    scanf("%s", add[4].state);

    printInfo(add[0]);
    printInfo(add[1]);
    printInfo(add[2]);
    printInfo(add[3]);
    printInfo(add[4]);

}

void printInfo(struct address add)
{
    printf("Address is.= %d,%d,%s,%s\n", add.HouseNo , add.Block , add.city, add.state);
}