#include<stdio.h>
int main()
{
    int n,flag=0,i=2;
    printf("Enter your number:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){

    if(n%i==0){
        flag=1;
        break;
    }
    }
    if(n==1){
        printf("1 is not a prime number enter above 2...!");
    }
    else{
        if(flag==0)
            printf("Its a prime number");
        else
            printf("Its Not a Prime number");

    }



}
