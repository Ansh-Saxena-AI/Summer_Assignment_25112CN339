//Write a program to Find column-wise sum.
#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (int j = 0; j < c; j++)
    {
        int sum = 0;

        for (int i = 0; i < r; i++)
            sum += a[i][j];

        printf("Column %d Sum = %d\n", j + 1, sum);
    }

    return 0;
}
