//Q8 Write a program to Check whether a number is palindrome.
#include<stdio.h>
int main()
{
    int number,rev=0;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&number);
    int onum=number;
    while (number>0)
    {
        rev=rev*10+number%10;
        number/=10;
    }
    if (onum==rev)
    printf("THE NUMBER IS A PALINDROME NUMBER");
    else
    printf("THE NUMBER IS NOT PALINDROME");
    return 0;
}