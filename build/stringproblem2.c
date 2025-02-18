// 1st problem is : Ask the user to enter their firstName & print it back to them 
// 2nd problem is : Also try this with their fullname

#include<stdio.h>
void main()

{
    /* char firstName[100];
    scanf("%s", firstName);
    printf("Your firstname is: %s", firstName);
    */


    char fullname[100];
    fgets( fullname , 100 , stdin);
    printf("Your fullname is: %s", fullname);  // we can also use puts in this place
}