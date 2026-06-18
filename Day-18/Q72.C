//Write a program to Sort array in descending order.
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
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("ARRAY IN DESCENDING ORDER : ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}