//Write a program to Binary search. 
#include <stdio.h>

int main()
{
    int n;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &n);

    int arr[n];

    printf("ENTER THE ELEMENTS OF ARRAY (IN SORTED ORDER) : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("ENTER THE ELEMENT TO SEARCH : ");
    scanf("%d", &key);

    int low = 0, high = n - 1, found = 0;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            printf("ELEMENT FOUND AT INDEX %d", mid);
            found = 1;
            break;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 0)
    {
        printf("ELEMENT NOT FOUND");
    }

    return 0;
}