//Q17 Write a program to Check perfect number. 
#include<stdio.h>
int main()
{
    int number,sum=0 ;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&number);
   
    for (int i=1 ; i<=number/2 ; i++)
    {
        if (number%i==0)
        {
            sum=sum+i;
        }
    }
    
    if (sum==number)
    {
        printf("THE NUMBER IS PERFECT ");
    }
    else
        printf("THE NUMBER IS NOT A PERFECT NUMBER");
    
    return 0;
}