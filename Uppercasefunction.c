#include<stdio.h>
char change(char c);
int main()
{
    char a;
    printf("enter your char:");
    scanf("%c",&a);
    printf("%c",change(a));
}
char change(char c)
{
    if((c>='a')&&(c<='z'))
           return c-32;
    else
        return c;

}
