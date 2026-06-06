//Q24 Write a program to Find x^n without pow().
#include<stdio.h>
int main()
{
    int base , exp , res=1 ;
    printf("ENTER THE BASE NUMBER : ");
    scanf("%d",&base);

    printf("ENTER THE EXPONENT : ");
    scanf("%d",&exp);

    for (int i=1; i<=exp; i++)
    {
        res=res*base ;
    }
    printf("%d raised to the power %d will give %d",base,exp,res);
    return 0;

}