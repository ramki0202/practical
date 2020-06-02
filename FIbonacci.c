#include<stdio.h>
int main()
{
   int n,t1=0,t2=1,sum=0;i=1;
   printf("Enter your increment number");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       printf("Fibanacci Number:%d",t1);
       sum=t1+t2;
       t1=t2;
       t2=sum;
   }
}
