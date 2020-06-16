#include<stdio.h>
int main()
{
    int n=10,i,j,sum,sp;

    for(i=1;i<=n;i++)
    {
        for(sp=1;sp<=n-i;sp++)
            {
            printf(" ");
        }

        sum=i;
        for(j=1;j<=i;j++)
            {
        printf("%d",sum%10);
        sum++;
        }
        printf("\n");
        }
}
