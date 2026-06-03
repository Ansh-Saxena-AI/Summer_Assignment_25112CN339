//Q9 Write a program to Check whether a number is prime.
#include<stdio.h>
int main()
{
    int number, count = 0;

    printf("ENTER THE NUMBER : ");
    scanf("%d", &number);

    if(number <= 1)
    {
        printf("THE NUMBER IS NOT PRIME");
        return 0;
    }

    for(int i = 2; i <= number/2; i++)
    {
        if(number % i == 0)
        {
            count++;
        }
    }

    if(count > 0)
        printf("THE NUMBER IS NOT PRIME");
    else
        printf("THE NUMBER IS PRIME");

    return 0;
}