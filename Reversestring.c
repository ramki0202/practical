#include<stdio.h>
int main()
{
    char a[80];
    char b[80];
    int i,j,c;

    printf("Enter your string:");
    gets(a);
   for(i=0;a[i];i++){
   ;
   }
   for(--i,j=0;i>=0;i--,j++)
    b[j]=a[i];
    b[j]='\0';
   printf("%s",b);



}

