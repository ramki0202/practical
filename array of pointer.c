#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *b[5],i,sum=0;
    for(i=0;i<=4;i++)
    {
        b[i]=&a[i];
        sum+=*b[i];
        printf("\n%d %u",b[i],*b[i]);
        printf("\n%d",sum);
    }


}
