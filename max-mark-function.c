#include<stdio.h>
int maxfun(int mark[],int n);
int main()
{
    int i,n;
    int rank[]={10,20,34,47,93};
    for(i=0;i<n;i++)
    {
        printf("%3d",rank[i]);
    }
    printf("\nMax value of Rank is %3d",maxfun(rank,5));
}
int maxfun(int mark[],int n)
{
    int sum,i;
    sum=mark[0];
    for(i=0;i<n;i++)
        if(sum<mark[i])
            sum=mark[i];
    return sum;

}
