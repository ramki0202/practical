#include<stdio.h>
int main()
{
    long num;
    long sum;
    char a='Y';
    while(a!='N'){
        printf("Enter your number:");
        scanf("%d",&num);
        fflush(stdin);
        sum=0;
        while(num>0){
        sum=sum+num%10;
        num=num/10;
        }
        printf("\nSum of number:%d",sum);
        printf("\nQuit? Yes or No:");
        a=getchar();
    }
}

