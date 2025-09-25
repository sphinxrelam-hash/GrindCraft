#include <stdio.h>

int main() {
    int matrix[3][3], i, j;
    int rowSum, colSum;

    printf("Enter elements of 3x3 matrix:\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d", &matrix[i][j]);

    printf("Sum of rows:\n");
    for(i=0; i<3; i++) {
        rowSum = 0;
        for(j=0; j<3; j++)
            rowSum += matrix[i][j];
        printf("Row %d: %d\n", i+1, rowSum);
    }

    printf("Sum of columns:\n");
    for(j=0; j<3; j++) {
        colSum = 0;
        for(i=0; i<3; i++)
            colSum += matrix[i][j];
        printf("Column %d: %d\n", j+1, colSum);
    }

    return 0;
}
