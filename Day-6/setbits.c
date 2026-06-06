//Q23 Write a program to Count set bits in a number.
#include<stdio.h>

int main()
{
    int number, count = 0;

    printf("ENTER THE NUMBER : ");
    scanf("%d", &number);

    while(number > 0)
    {
        if(number % 2 == 1)
        {
            count++;
        }

        number = number / 2;
    }

    printf("NUMBER OF SET BITS = %d", count);

    return 0;
}