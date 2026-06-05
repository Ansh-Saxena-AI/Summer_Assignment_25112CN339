//Q19 Write a program to Print factors of a number. 
#include<stdio.h>
int main()
{
    int number;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&number);
    for (int i=1 ; i<=number ; i++)
    {
        if (number%i==0)
        {
            printf("%d\t",i);;
        }
    }
    return 0;
}