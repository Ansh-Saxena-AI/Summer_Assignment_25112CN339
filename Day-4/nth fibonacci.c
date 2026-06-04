//Q14 Write a program to Find nth Fibonacci term
#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE TERM OF FIBONACCI SERIES u want : ");
    scanf("%d",&n); 
    if(n <= 0)
    {
        printf("Please enter a positive term number.");
        return 0;
    }
    int pt,ct,nt ;
    pt=0,ct=1 ;
    for (int i=1 ; i<n ;i++)
    {
        nt=ct+pt;
        pt=ct;
        ct=nt;
    }
    printf("Nth TERM OF FIBONACCI IS : %d",pt);
    return 0;

}
