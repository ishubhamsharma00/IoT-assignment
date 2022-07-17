#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a 3 digit number:");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    y=y*100;
    x=x+y;
    printf("Number after rotation is:%d\n",x);
    return 0;
}