#include<stdio.h>
int main()
{
    int i;
    int n;
    int option='Y';
    while(option!='N'){
    int a=0;
    printf("Enter your number:");
    scanf("%d",&n);
    fflush(stdin);
    for(i=1;i<=n;i++){
        a=a+i;
    }
    printf("your value:%d",a);
    printf("\nQuit? Yes or no:");
    option=getchar();
    }


    return 0;
}

