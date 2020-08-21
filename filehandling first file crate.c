#include<stdio.h>

int main()
{
char str[100];
FILE *fp;

fp=fopen("newfile.txt","r");
if(fp==NULL)
{
    printf("Dose Not exist..!");
}
else{
    printf("File Created Sucessfully..!");
}

while((fscanf(fp,"%s",&str))!=EOF)
{
    printf("%s ",str);
}

fclose(fp);



}
