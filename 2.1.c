#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("\nUnit digit is %d\n",x%10);
    return 0;
}