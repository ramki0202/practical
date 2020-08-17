#include<stdio.h>


int main()
{
struct student
{
int roll;
char name[100];
float percent;
};
struct student s1,s2,s3;

printf("\nEnter Your roll no:");
scanf("%d",&s1.roll);
printf("\nEnter Your Name:");
scanf("%s",s1.name);
printf("\nEnter Your Percentage:");
scanf("%f",&s1.percent);

printf("Enter Your roll no:");
scanf("%d",&s2.roll);
printf("\nEnter Your Name:");
scanf("%s",s2.name);
printf("\nEnter Your Percentage:");
scanf("%f",&s2.percent);

printf("\nEnter Your roll no:");
scanf("%d",&s3.roll);
printf("\nEnter Your Name:");
scanf("%s",s3.name);
printf("\nEnter Your Percentage:");
scanf("%f",&s3.percent);
printf("\nStudent Details");
printf("\nRoll no\tName\tPercentage");
printf("\n%d\t%s\t%f",s1.roll,s1.name,s1.percent);
printf("\n%d\t%s\t%f",s2.roll,s2.name,s2.percent);
printf("\n%d\t%s\t%f",s3.roll,s3.name,s3.percent);

}
