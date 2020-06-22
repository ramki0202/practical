#include<stdio.h>
int sumofdig(long n);
int main()
{
    int n;
    printf("Enter Your Digits:");
    scanf("%lld",&n);
    if(sumofdig(n)==1)
        printf("%ld is Good..!",sumofdig(n));
    else if(sumofdig(n)==2)
        printf("%ld is Not Good..!",sumofdig(n));
    else if(sumofdig(n)==3)
        printf("%ld is Very Good...!",sumofdig(n));
    else if(sumofdig(n)==4)
        printf("%ld is Not Good..!",sumofdig(n));
    else if(sumofdig(n)==5)
        printf("%ld is Good..!",sumofdig(n));
    else if(sumofdig(n)==6)
        printf("%ld is Very Good...!",sumofdig(n));
    else if(sumofdig(n)==7)
        printf("%ld is Good...!",sumofdig(n));
    else if(sumofdig(n)==8)
        printf("%ld is very Bad..!",sumofdig(n));
    else
        printf("%ld is Very Very Good..!",sumofdig(n));

}
int sumofdig(long n)
{
    int sum=0;
    while(n>9){
        sum=0;
        while(n>0)
            {
            sum=sum+n%10;
            n=n/10;
            }
            n=sum;
    }
  return n;
}
