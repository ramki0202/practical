#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *b,i,sum=0;
    b=&a;
    for(i=0;i<5;i++){
    printf("\n%u %d",*(b+i), b+i);
    }
    for(i=0;i<5;i++)
    {
        sum+=b[i];
    }

    printf("\n%d",sum);



}
