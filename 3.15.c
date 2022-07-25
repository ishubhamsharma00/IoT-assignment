/*Write a program to check whether a given number is positive, negative or zero.*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x>0)
    printf("%d is Positive",x);
    else if(x==0)
    printf("%d is Zero",x);
    else
    printf("%d is negative",x);
    printf("\n");
    return 0;
}