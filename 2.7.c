#include<stdio.h>
int main()
{
    int x,count=1;
    printf("Enter a number:");
    scanf("%d",&x);
    while((x&1)!=1)
    {
        x=x>>1;
        count++;
    }
    printf("LSB having 1 is %d\n",count);
    return 0;
}