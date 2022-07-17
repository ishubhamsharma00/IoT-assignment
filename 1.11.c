#include<stdio.h>
int main()
{
    int time,min,hour;
    printf("enter time in hhmm format:");
    scanf("%d",&time);
    min=time%100;
    hour=time/100;
    printf("%d hours %d minutes",hour,min);
    return 0;
}