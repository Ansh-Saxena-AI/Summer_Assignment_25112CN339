//Write a program to Selection sort. 
#include <stdio.h>

int main()
{
    int n;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &n);

    int arr[n];

    printf("ENTER THE ELEMENTS OF ARRAY : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n - 1; i++)
    {
        int min = i;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("SORTED ARRAY : ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}