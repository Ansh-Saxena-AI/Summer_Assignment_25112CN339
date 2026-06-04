//Q13 Write a program to Generate Fibonacci series. 
#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE NO. OF TERMS OF FIBONACCI SERIES : ");
    scanf("%d",&n);
    //0 1 1 2 3 5 8 13 21 34 
    int pt,ct,nt ;
    pt=0,ct=1 ;
    for (int i=1 ; i<(n+1) ;i++)
    {
        printf("%d ",pt);
        nt=ct+pt;
        pt=ct;
        ct=nt;
       
    }
    return 0;

}
