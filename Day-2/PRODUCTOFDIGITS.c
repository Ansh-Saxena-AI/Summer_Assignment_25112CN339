//Q7 Write a program to Find product of digits of a number.
#include<stdio.h>
int main()
{
    int number,product=1;
    printf("ENTER THE NUMBER");
    scanf("%d",&number);
    while (number>0)
    {
        product=product*(number%10);
        number=number/10;
    }
    printf("THE PRODUCT OF DIGITS OF A GIVEN NUMBER is %d",product);
    return 0;
}