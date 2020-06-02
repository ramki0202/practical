#include<stdio.h>
int main()
{
    int a,i=1,sum=1;;

    printf("Enter Your Fibanoci:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sum*=i;

    }
    printf("\nYour Fibanoci Number:%d",sum);
}


