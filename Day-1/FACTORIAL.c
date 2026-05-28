//Q3 Write a program to Find factorial of a number. 
#include<stdio.h>
int main()
{
    int num,fact=1;
    int i=1;
    printf("ENTER THE NUMBER");
    scanf("%d",&num);
    while (i<=num)
    {
        fact=fact*i;
        i=i+1;
    }
    printf("THE FACTORIAL OF %d IS %d ",num,fact);
    return 0;
}