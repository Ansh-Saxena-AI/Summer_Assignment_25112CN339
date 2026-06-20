//Write a program to Find row-wise sum. 
#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < r; i++)
    {
        int sum = 0;

        for (int j = 0; j < c; j++)
            sum += a[i][j];

        printf("Row %d Sum = %d\n", i + 1, sum);
    }

    return 0;
}
