#include<stdio.h>
int main()
{
  char a[80];
  int i;
  int vc=0;
  int cc=0;
  int c;
  printf("Enter your Characters:");
  gets(a);
  for(i=0;a[i];i++){
    c=a[i];
    if((c>='a' && c<='z') || (c>='A' && c<='Z'))
    {
        switch(c){
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
        case'A':
        case'E':
        case'I':
        case'O':
        case'U':
        vc++;
        break;
        default:
        cc++;
        }
    }
  }
  printf("String and Vovel Count...!\n");
  printf("vovels   character count\n");
  printf("%d          %d",vc ,cc );

}

