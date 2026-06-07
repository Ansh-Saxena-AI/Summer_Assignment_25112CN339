//Q25 Write a program to Recursive factorial. 
#include<stdio.h>

int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    int number;

    printf("ENTER THE NUMBER : ");
    scanf("%d", &number);

    printf("FACTORIAL = %d", factorial(number));

    return 0;
}