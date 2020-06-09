#include<stdio.h>
 int main()
 {
    int n,remainder,reverseN=0,originalN;
    printf("Enter your number:");
    scanf("%d",&n);
    originalN=n;
    while(n!=0){
        remainder=n%10;
        reverseN=reverseN*10+remainder;
        n/=10;
    }
    if(originalN == reverseN)
        printf("This is Palendrome number...!%d\n",originalN);
    else
        printf("This is no Palendrome number...!%d\n",originalN);


 }
