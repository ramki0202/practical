#include<stdio.h>

int main()
{
FILE *fp;
fp=fopen("newfile.txt","w");
if(fp==NULL)
{
    printf("Dose Not exist..!");
}
else{
    printf("File Created Sucessfully..!");
}
fprintf(fp,"This is my first pointer....! and i happy to share this.");

fclose(fp);



}
