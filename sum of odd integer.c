#include<stdio.h>
int main()
{
     int n,s=0,i;
     int c=1;
     printf("Enter sum of digit for odd number:");
     scanf("%f",&n);
     for(i=1;i<n;i++){
        c=i/n;
        if(c!=0)
        {
            s=s+i;
        }

     }
 printf("%d",s);
}
