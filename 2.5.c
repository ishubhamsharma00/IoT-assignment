#include<stdio.h>
int main()
{
    int x,i,sum=0;
    printf("Enter a 3 digit number:");
    scanf("%d",&x);
    while(x!=0)
    {
      sum=sum+x%10;
      x=x/10;
    }
    printf("Sum is %d\n",sum);
    return 0;
}