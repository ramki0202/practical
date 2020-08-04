#include<stdio.h>
struct student{
    char name[30];
    int mark1,mark2;
    int total;
    float avg;
    char elegible;
};
int main()
{
    struct student s[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("\n Enter %d Student Details:%d",i+1);

        printf("\n Enter Student Name:");gets(s[i].name);
        printf("\n Enter Mark1:");scanf("%d",&s[i].mark1);
        printf("\n Enter Mark2:");scanf("%d",&s[i].mark2);

        getchar();

        s[i].total=s[i].mark1+s[i].mark2;
        s[i].avg=s[i].total/2.0;

        if(s[i].avg>=80)
            strcpy(s[i].elegible,"Eligible");
        else
             strcpy(s[i].elegible,"Not Eligible");
    }
    printf("s/no  Name Mark1 Mark2 Total Avg Elegible");
    for(i=0;i<5;i++)
        printf("\n%5d %20s %5d %5d %7.f %5.d %5s",i+1,s[i].name,s[i].mark1,s[i].mark2,s[i].total,s[i].avg,s[i].elegible);
}
