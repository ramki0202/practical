#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i;
    int n=5;
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}
