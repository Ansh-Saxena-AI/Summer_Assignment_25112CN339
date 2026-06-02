//Q8 Write a program to Check whether a number is palindrome. 
#include<stdio.h>
int main()
{
    int number,rev=0,orig;
    printf("ENTER THE NUMBER");
    scanf("%d",&number);
    orig=number;
    while (number>0)
    {
        rev=rev*10+(number%10);
        number=number/10;
    }
    if (rev==orig)
        printf("THE NUMBER IS PALINDROME");
    else
        printf("THE NUMBER IS NOT PALINDROME");
    
        return 0;
}