/*Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/
#include<stdio.h>
int main()
{
    char x;
    printf("Enter an alphabet:");
    scanf("%c",&x);
    if(x>=65 && x<=90)
    printf("%c is in Upper case alphabet\n",x);
    else if(x>=97 && x<=122)
    printf("%c is in lower case alphabet\n",x);
    else if(x>=48 && x<=57)
    printf("%c is a digit\n",x);
    else
    printf("%c is special character\n",x);
    return 0;
}