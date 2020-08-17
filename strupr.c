#include<stdio.h>
#include<string.h>

int main()
{
    char name[100];
    printf("Enter Your name:");
    gets(name);
    printf("You Entered %s",strupr(name));

}
