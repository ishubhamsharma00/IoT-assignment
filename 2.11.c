#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Enter a digit to append:");
    scanf("%d",&y);
    x=x*10;
    x=x+y;
    printf("Number after append is %d\n",x);
    return 0;
}