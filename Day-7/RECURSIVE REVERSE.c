//Q28 Write a program to Recursive reverse number.
#include<stdio.h>

int rev = 0;

int reverse(int n)
{
    if(n == 0)
        return rev;

    rev = rev * 10 + n % 10;

    return reverse(n / 10);
}

int main()
{
    int number;

    printf("ENTER THE NUMBER : ");
    scanf("%d", &number);

    printf("REVERSED NUMBER = %d", reverse(number));

    return 0;
}