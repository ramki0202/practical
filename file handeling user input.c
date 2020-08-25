#include<stdio.h>

int main()
{
    int a,b,c;
    FILE *fp;
    fp=fopen("userinput.txt","w");
    printf("Enter your A B Value:");
    scanf("%d %d",&a,&b);
    c=a+b;
    fprintf(fp,"%d+%d=%d",a,b,c);
    fclose(fp);
}
