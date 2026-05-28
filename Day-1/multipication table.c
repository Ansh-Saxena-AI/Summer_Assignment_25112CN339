//Q2 Write a program to Print multiplication table of a given number.
#include<stdio.h>
int main()
{
    int number;
    printf("ENTER THE NUMBER :");
    scanf("%d",&number);
    for(int i=1;i<11;i++)
    {
        printf("%d * %d = %d\n",number,i,number*i);

    }
    return 0;
}