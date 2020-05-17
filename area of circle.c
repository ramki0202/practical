#include<stdio.h>
int main()
{
   float A;
   float r;
   printf("Enter Your Radius:");
   scanf("%f",&r);
   if(r>=1 ||r>=99){
   A=3.14*r*r;
   printf("Your Area of circle is:%f",A);
   }
   if(r==100)
    break;

   else{
    printf("Enter Valid input....!");
    continue;
   }

}

