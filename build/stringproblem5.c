// Find the salted form of password entered by the user if the salt is "55555" & added at the end

#include<Stdio.h>
#include<string.h>

void saltedPass( char pass[]);

void main()
{
    char pass[100];
    scanf("%s", pass);

    saltedPass(pass);
}

void saltedPass( char pass[])
{
    char salt[] = "55555";
    char newPass[200];

    strcpy(newPass , pass);
    strcat(newPass , salt);
    puts(newPass);
}