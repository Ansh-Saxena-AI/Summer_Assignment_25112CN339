//Write a program to Rotate array left. 
#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int first = arr[0];

    for(int i=0;i<n-1;i++)
        arr[i] = arr[i+1];

    arr[n-1] = first;

    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}