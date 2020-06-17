#include<stdio.h>
int max(int a,int b,int c,int d);
int main()
{       int e,f,g,h;
        printf("%d",(max(4,5,7,3)+max(1,2,3,4)+max(10,15,17,14)+max(5,15,10,20))/4);
}
int max(int a,int b,int c,int d)
{
    if((a>b)&&(a>c)&&(a>d))
        return a;
       else if((b>a)&&(b>c)&&(b>d))
        return b;
       else if((c>a)&&(c>b)&&(c>d))
        return c;
       else
       return d;

}
