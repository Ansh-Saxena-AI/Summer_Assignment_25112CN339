//Q15 Write a program to Check Armstrong number. 
#include<stdio.h>
#include<math.h>
int main()
{
    int number,c=0,orig,sum=0,rem,num1;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&number);
    orig=num1=number;
    //154=1^3+5^3+4^3
    while (number>0)
    {
        number=number/10;
        c=c+1;
    }
    while (num1)
    {
        rem=num1%10;
        sum=sum+pow(rem,c);
        num1=num1/10;
    }
    if (sum==orig)
    {
        printf("THE NUMBER IS AN ARMSTRONG NUMBER");
    }
    else
    {
        printf("THE NUMBER IS NOT AN ARMSTRONG NUMBER");
    }
    return 0;
}