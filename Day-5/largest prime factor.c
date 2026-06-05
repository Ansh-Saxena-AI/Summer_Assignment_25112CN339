//Q20 Write a program to Find largest prime factor.  
#include<stdio.h>

int main()
{
    int number, largest = -1;

    printf("ENTER THE NUMBER : ");
    scanf("%d", &number);

    for(int i = 2; i <= number; i++)
    {
        while(number % i == 0)
        {
            largest = i;
            number /= i;
        }
    }

    printf("Largest prime factor = %d", largest);

    return 0;
}