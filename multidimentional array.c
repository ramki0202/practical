#include<stdio.h>
int main()
{
    int max[2][2];
    int max2[2][2];
    int res[2][2];
    int m=2;
    int n=2;
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            printf("\nEnter max value %d %d:",i+1,j+1);
            scanf("%d",&max[i][j]);
        }

        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                {
                    printf("\nEnter max2 value %d %d:",i,j);
                    scanf("%d",&max2[i][j]);
                }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            {
                printf("\n Row= %d col= %d m1= %d m2= %d", i , j,max[i][j],max2[i][j] );
                res[i][j]=max[i][j]+max2[i][j];
            }
    }
        for(i=0;i<m;i++)
        {
            printf("\n");
            for(j=0;j<n;j++)
        {
             printf("%5d",res[i][j]);
        }
        }

}
