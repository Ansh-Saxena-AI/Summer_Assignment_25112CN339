//Q22 Write a program to Convert binary to decimal. 
//Q22 Write a program to Convert binary to decimal.
#include<stdio.h>

int main()
{
    int binary, decimal = 0, place = 1;

    printf("ENTER THE BINARY NUMBER : ");
    scanf("%d", &binary);

    while(binary > 0)
    {
        int digit = binary % 10;
        decimal = decimal + digit * place;
        place = place * 2;
        binary = binary / 10;
    }

    printf("DECIMAL NUMBER = %d", decimal);

    return 0;
}