/*Write a program to print greater between two numbers. Print one number of both are
the same.*/
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    if(x>y)
    printf("%d is greater than %d\n",x,y);
    else if(y>x)
    printf("%d is greater than %d\n",y,x);
    else
    printf("Both are %d\n",x);
    return 0;
}