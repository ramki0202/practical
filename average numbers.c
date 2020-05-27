#include<stdio.h>
int main()
{
 float a,b,c,d,e,f,g,h;
 printf("enter the Value of n:");
 scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
 g=(a+b+c+d+e+f)/6;
 h=(a+b+c+d+e+f);
 printf("\nAverage Value:%.2f",g);
 printf("\nTotal Value:%.1f",h);
 return 0;
    }
