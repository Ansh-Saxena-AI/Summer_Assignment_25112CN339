//Q3 Write a program to Find factorial of a number
#include<stdio.h>
int main()
{
    int number,fact=1;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&number);
    for (int i = 1;i<=number;i++)
    {
        fact=fact*i;
    }
    printf("THE FACTORIAL OF THE NUMBER IS : %d",fact);
    return 0;
}