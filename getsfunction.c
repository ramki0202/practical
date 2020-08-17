#include<stdio.h>
int main()
{
    char str[20];
    char str2[20];
    printf("Enter your Name:");
    gets(str);
    printf("Hi...%s",str);

    printf("\nEnter your Name:");
    scanf("%s",str2);
    printf("Hi...%s",str2);
}

