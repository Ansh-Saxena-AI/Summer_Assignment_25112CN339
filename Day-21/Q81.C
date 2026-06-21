//Write a program to Find string length without strlen().

#include <stdio.h>

int main()
{
    char str[1000];
    int len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n')
    {
        len++;
    }

    printf("Length of string = %d", len);

    return 0;
}