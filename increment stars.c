#include<stdio.h>
int main()
{
   int a,i=1,j=1;

   printf("Enter number to display star:");
   scanf("%d",&a);
   for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            printf(" *");
        }
     printf("\n");
   }
    return 0;
}

