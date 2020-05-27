#include<stdio.h>
int main()
{
    float n;
    int i=1;
    float sum=0;
    float a;
    printf("How Many numbers you enter:");
    scanf("%f",&n);
    printf("Enter your number");
    for(i=1;i<=n;i++)
    {
    scanf("%f",&a);
    sum+=a;
    }
    printf("\nYour average and addtion  is%f %f:",sum ,sum/n );


}
