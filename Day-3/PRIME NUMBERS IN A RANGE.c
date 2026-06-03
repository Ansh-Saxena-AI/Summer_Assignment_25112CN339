//Q10 Write a program to Print prime numbers in a range.
#include<stdio.h>
int main()
{
    int lowerlimit, upperlimit;
    int totalPrimes = 0;

    printf("ENTER THE LOWER LIMIT OF RANGE : ");
    scanf("%d", &lowerlimit);

    printf("ENTER THE UPPER LIMIT OF THE RANGE : ");
    scanf("%d", &upperlimit);

    for(int i = lowerlimit; i <= upperlimit; i++)
    {
        int count = 0;

        if(i <= 1)
            continue;

        for(int j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                count++;
                break;
            }
        }

        if(count == 0)
        {
            printf("%d ", i);
            totalPrimes++;
        }
    }

    printf("\nTHE TOTAL NUMBER OF PRIME NUMBERS IN THE RANGE %d to %d is %d",
           lowerlimit, upperlimit, totalPrimes);

    return 0;
}