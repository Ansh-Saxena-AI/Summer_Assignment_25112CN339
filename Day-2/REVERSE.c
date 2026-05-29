//Q6 Write a program to Reverse a number
#include<stdio.h>
int main()
{
    int number,rev=0;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&number);
    while (number>0)
    {
        rev=rev*10+number%10;
        number/=10;
    }
    printf("THE REVERSE OF THE NUMBER IS %d",rev);
    return 0;
}