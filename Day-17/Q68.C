//Write a program to Find common elements. 
#include<stdio.h>

int main()
{
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int a[n1];

    printf("Enter elements of first array:\n");
    for(int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int b[n2];

    printf("Enter elements of second array:\n");
    for(int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    printf("Common elements are: ");

    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            if(a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}