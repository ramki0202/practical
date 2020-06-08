#include<stdio.h>
int main()
{
    char color;
    printf("Enter First letter to display color:eg(r,R,G,g,B,b)");
    scanf("%c",&color);
    switch(color)
    {
    case 'r':
    case 'R':
        printf("Red");
    break;
    case 'g':
    case 'G':
        printf("Green");
    break;
    case 'b':
    case 'B':
        printf("Blue");
    break;

    default:
        printf("Invalid Enter...!");
    }
    return 0;
}
