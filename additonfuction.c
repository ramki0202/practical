#include<stdio.h>
int addon(num1,num2);
int main()
{
    int a,b,res;
    printf("enter a,b");
    scanf("%d %d",&a,&b);
    res=addon(a,b);
    printf("a+b=%d",res);
}
int addon(num1,num2)
{
    int c;
    c=num1+num2;
    return c;
}
