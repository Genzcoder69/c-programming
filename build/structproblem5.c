// make a structure to store Bank acc. information of a customer of ABC bank. Also make an alias of it.

#include<stdio.h>
#include<string.h>

typedef struct BankAccount
{
    int accountNo;
    char name[100];
} acc;

void main()
{ 
    acc acc1 = { 844, "Nobita"};
    acc acc2 = { 373, "Zian"};
    acc acc3 = { 762, "Sizuka"};

    printf("Acc No.= %d\n", acc1.accountNo);
    printf("Name = %s\n", acc1.name);

    printf("Acc No.= %d\n", acc2.accountNo);
    printf("Name = %s\n", acc2.name);

    printf("Acc No.= %d\n", acc3.accountNo);
    printf("Name = %s\n", acc3.name);
}