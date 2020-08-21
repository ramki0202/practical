#include<stdio.h>
int add(int,int);
int main()
{
    int x,y,z;
    int (*p)(int,int);
    p=&add;
    printf("Enter x and y value:");
    scanf("%d %d",&x,&y);
    printf("x+y=%d",p(x,y));


}
int add(int a,int b)
{
    int c=a+b;
    return c;
}
