#include<stdio.h>
int main()
{
   float A;
   float r;
   do{
    printf("Enter Your Radius:");
    scanf("%f",&r);
    if(r<1){
        printf("Enter valid input...!");
        continue;
    }
    if(r==100)
        break;
    A=3.14*r*r;
    printf("Your Area of circle is:%f\n",A);
   }while(r>=1 || r<=99);



}

