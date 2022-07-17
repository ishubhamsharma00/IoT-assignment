#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter 1st number:");
    scanf("%d",&x);
    printf("Enter 2nd number:");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\n1st number is %d and 2nd number is %d\n",x,y);
    return 0;
}