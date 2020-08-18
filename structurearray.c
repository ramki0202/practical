#include<stdio.h>

int main()
{
    struct student
    {
    int rollno;
    char name[20];
    int mark;
    };struct student s[2];
    int i,j;

    for(i=1;i<=2;i++){
        printf("\nEnter student %d Details:",i);

        printf("\nEnter Roll number:");
        scanf("%d",&s[i].rollno);

        printf("\nEnter Name:");
        scanf("%s",&s[i].name);

        printf("\nEnter Mark:");
        scanf("%d",&s[i].mark);
          printf("ROll Number\t Name\t Mark");
         printf("\n%d\t\t %s\t %d",s[i].rollno,s[i].name,s[i].mark);
        }

    printf("ROll Number\t Name\t Mark");

    for(i=1;i<=2;i++)
    {
        printf("\n%d\n %s\n %d",s[i].rollno,s[i].name,s[i].mark);
    }
}
