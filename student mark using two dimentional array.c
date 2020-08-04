    #include<stdio.h>
int main()
{
    int mark[3][2];
    int rcount[3];
    int ccount[2];
    int i,j;
    for(i=0;i<3;i++){
        printf("\nStudent-%d",i+1);
        for(j=0;j<2;j++){
        printf("\nEnter Your Mark-%d:",j+1);
        scanf("%d",&mark[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        rcount[3]=0;
        for(j=0;j<2;j++)
            rcount[i]+=mark[i][j];
    }

    printf("\nS/no  Mark-1  Mark-2 Total");
    for(i=0;i<3;i++)
    {
        printf("\n%3d",i+1);
        for(j=0;j<2;j++)
            printf("   %3d  ",mark[i][j]);
            printf("%  3d ",rcount[i]);
    }
}

