//Write a program to Write function for palindrome. 
#include <stdio.h>

int palindrome(int n)
{
    int rev = 0, temp = n;
    while(temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    return n == rev;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(palindrome(n))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}