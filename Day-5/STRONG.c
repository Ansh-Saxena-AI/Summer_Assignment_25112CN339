//Q18 Write a program to Check strong number.(whose sum of factorial of digits = number)
#include<stdio.h>
int main()
{
    int number,fact_sum=0,orig,dig ;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&number);
    orig=number;
    while (number>0)
    {
        dig=number%10;
        number=number/10;
        int fact=1;
        for (int i=1 ; i<=dig ; i++)
        {
            fact=fact*i;
        }
        fact_sum=fact_sum+fact;
    }
    if (fact_sum==orig)
    {
        printf("THE NUMBER IS A STRONG NUMBER");
    }
    else
    {
        printf("THE NUMBER IS NOT A STRONG NUMBER");
    }
    return 0;
}