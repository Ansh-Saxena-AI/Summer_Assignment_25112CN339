//Q21 Write a program to Convert decimal to binary.
#include<stdio.h>

int main()
{
    int number, binary = 0, place = 1;

    printf("ENTER THE NUMBER : ");
    scanf("%d", &number);

    while(number > 0)
    {
        int remainder = number % 2;
        binary = binary + remainder * place;
        place = place * 10;
        number = number / 2;
    }

    printf("BINARY NUMBER = %d", binary);

    return 0;
}