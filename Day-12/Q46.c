//Write a program to Write function for Armstrong.
#include <stdio.h>
int armstrong(int n)
{
    int temp = n, sum = 0, rem;
    while(temp > 0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }
    return n == sum;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if(armstrong(n))
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}