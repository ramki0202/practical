#include<stdio.h>
#include<string.h>

int main()
{
    char name[100];
    char name2[100];
    char str[100];

    printf("Enter name1 :");
    gets(name);
    printf("Enter name2 :");
    gets(name2);
    //str=name;
    //name=name2;
    //name2=str
      strcpy(str,name);
      strcpy(name,name2);
        strcpy(name2,str);
    printf("first Name:%s",name);
    printf("\nsecound Name:%s",name2);


}
