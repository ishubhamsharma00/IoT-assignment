#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter 1st number:");
    scanf("%d",&x);
    printf("Enter 2nd number:");
    scanf("%d",&y);
    z=x;
    x=y;
    y=z;
    printf("\n1st number is %d and 2nd number is %d\n",x,y);
    return 0;
}