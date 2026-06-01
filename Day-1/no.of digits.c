//Q-1 WAP TO COUNT NUMBER OF DIGITS IN A GIVEN NUMBER
#include<stdio.h>

int main()
{
    int number, count = 0;

    printf("ENTER THE NUMBER: ");
    scanf("%d", &number);

    int onum = number;

    if(number == 0)
    {
        count = 1;
    }
    else
    {
        while(number > 0)
        {
            count = count + 1;
            number = number / 10;
        }
    }

    printf("THE NUMBER OF DIGITS IN %d IS %d", onum, count);

    return 0;
}