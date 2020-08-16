#include<stdio.h>
int main()
{
    int a=10,b;
    int *c;
    c=&a;
    printf("%u",c);
    b=c;
    printf("\n%d \n%u",b,b);
    b=c+b;
    printf("\n%d \n%u",b,c);
    b=*c;
    printf("\n%d \n%u \n%d \n%d",b,c,*c);
    ++*c;
    printf("\n%d \n%d",*c,a);

}
