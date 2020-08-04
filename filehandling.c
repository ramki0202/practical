
#include<stdio.h>
int main()
{
FILE *f;
int c;
f=fopen("c:\\xampp\\htdocs\\ramki.txt","r");

while((c=getc(f))!=EOF)
    {
        putchar(c);
    }
fclose;
}
