#include<stdio.h>
int main()
{
int flag;

printf("enter value (1-3):");
scanf("%d",&flag);
switch(flag)
{
case 1:
    printf("Hot");
    break;
case 2:
    printf("Luke warm");
    break;
case 3:
    printf("cold ");
    break;
default:
    printf("Out of range");
}

}
