//Write a program to Frequency of an element.
#include<stdio.h>

int main()
{
    int n, key, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find frequency: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            count++;
        }
    }

    printf("Frequency of %d = %d", key, count);

    return 0;
}