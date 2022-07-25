/*Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.*/

#include<stdio.h>
int main()
{
    int cp,sp;
    printf("Enter Cost price & Selling price:");
    scanf("%d %d",&cp,&sp);
    if(cp>sp)
    printf("Loss percentage is: %d%%",(cp-sp)*100/cp);
    else
    printf("Profit percentage is: %d%%",(sp-cp)*100/cp);
    printf("\n");
    return 0;
}