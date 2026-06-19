//Write a program to Find diagonal sum. 
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    int A[10][10];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        sum += A[i][i];
    }

    printf("Sum of principal diagonal elements = %d\n", sum);

    return 0;
}