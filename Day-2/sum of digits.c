//Q5 Write a program to Find sum of digits of a number. 
#include<stdio.h>
int main()
{
    int number,sum=0 ;
    printf("ENTER THE NUMBER");
    scanf("%d",&number);
    while (number>0)
    {
        sum=sum+(number%10);
        number=number/10;
    }
    printf("THE SUM OF DIGITS OF A GIVEN NUMBER IS %d",sum);
    return 0;

}