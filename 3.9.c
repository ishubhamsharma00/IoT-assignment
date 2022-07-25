#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter three numbers:");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y)
    {
        if(x>z)
        printf("%d is greatest",x);
        else
        printf("%d is greatest",z);
    }
    else
    {
        if(y>z)
        printf("%d is greatest",y);
        else
        printf("%d is greatest",z);
    }
    printf("\n");
    return 0;
}