//Write a program to Count even and odd elements. 
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int even = 0, odd = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even elements = %d\n", even);
    printf("Odd elements = %d\n", odd);

    return 0;
}