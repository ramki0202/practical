#include<stdio.h>
int main()
{
    int a;
    printf("Enter Temprature:");
    scanf("%d",&a);
    if(a<=0)
        printf("Ice");
    else if((a>0) && (a<=100))
        printf("Water");
    else
        printf("steam");
 return 0;
}
