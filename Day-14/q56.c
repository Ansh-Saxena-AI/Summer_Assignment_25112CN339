//Write a program to Find duplicates in array. 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements are:\n");
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count > 0)
        {
            int flag = 0;

            for(int k = 0; k < i; k++)
            {
                if(arr[i] == arr[k])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                printf("%d ", arr[i]);
            }
        }
    }
    return 0;
}