//Q1 Write a program to Calculate sum of first N natural numbers.
#include<stdio.h>
int main()
{
    int number,sum;
    
    printf("ENTER THE NUMBER");
    scanf("%d",&number);
    
    sum=number*(number+1)/2;
    
    printf("THE SUM OF NUMBERS UPTO %d IS %d",number,sum);
    return 0;
}
