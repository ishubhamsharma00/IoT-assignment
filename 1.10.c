#include<stdio.h>
int main()
{
    int date,day,mon,yr;
    printf("Enter date in ddmmyyyy format:");
    scanf("%d",&date);
    day=date/1000000;
    date=date-day*1000000;
    mon=date/10000;
    yr=date%10000;

    printf("Day is %d \nMonth is %d \nYear is %d\n",day,mon,yr);
    return 0;
}