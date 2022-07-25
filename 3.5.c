/*Write a program to check whether a given number is a three-digit number or not.*/
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a three digit number:");
    scanf("%d",&x);
    y=printf("%d",x);
    if(y==3)
    printf(" is three digit number\n");
    else
    printf(" is not three digit number\n");
    return 0;
}