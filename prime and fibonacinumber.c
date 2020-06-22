#include<stdio.h>
int fibonaci(int);

int main()
{

    int a;
        printf("Enter your Number:");
        scanf("%d",&a);
        a=fibonaci(a);
        printf("%d",a);

}
int fibonaci(int n)
    {   int n1=0,n2=1,sum,i,a;
        printf("%d %d",n1,n2);
        for(i=0;i<n;i++)
        {
            sum=n1+n2;
            n1=n2;
            n2=sum;
            printf(" %d",sum);

        }

    }
