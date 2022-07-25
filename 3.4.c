/*Write a program to check whether a given number is an even number or an odd
number without using % operator.*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if((x&1)==0)
    printf("%d is even number\n",x);
    else
    printf("%d is odd number\n",x);
    return 0;
}