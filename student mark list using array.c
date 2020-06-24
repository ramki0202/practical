#include<stdio.h>
int main()
{
    int mark[30];
    int i,n;
    int max;
    printf("Enter your No of student:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        printf("Enter Student mark:");
        scanf("%d",&mark[i]);
        }
    max=mark[0];
    for(i=1;i<n;i++)
    if(max<mark[i])
        max=mark[i];
    printf("You Entered Following Marks");
    for(i=0;i<n;i++)
    {
        printf("%3d ",mark[i]);
    }
    printf("\nMax mark of %d",max);

    return 0;
}

