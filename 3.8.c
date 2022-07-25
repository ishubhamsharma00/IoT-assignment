/*Write a program to check whether a given year is a leap year or not.*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a year:");
    scanf("%d",&x);
    if(x%400==0)
    printf("%d is leap year\n",x);
    else if(x%100==0)
    printf("%d is not a leap year\n",x);
    else if(x%4==0)
    printf("%d is leap year\n",x);
    else
    printf("%d is not a leap year\n",x);
    return 0;
}