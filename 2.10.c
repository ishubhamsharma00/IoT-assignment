#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    x=x/10;
    x=x*10;
    printf("New number is %d\n",x);
    return 0;
}