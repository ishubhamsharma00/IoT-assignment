#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%5==0)
    printf("%d is Divisible by 5\n",x);
    else
    printf("%d is Not divisible by 5\n",x);

}