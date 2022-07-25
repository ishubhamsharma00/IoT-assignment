/*Write a program to check whether a given alphabet is in uppercase or lowercase.*/
#include<stdio.h>
int main()
{
    char x;
    printf("Enter an alphabet:");
    scanf("%c",&x);
    if(x>=65 && x<=90)
    printf("%c is in Upper case\n",x);
    else if(x>=97 && x<=122)
    printf("%c is in lower case\n",x);
    else
    printf("Enter correct character\n");
    return 0;
}