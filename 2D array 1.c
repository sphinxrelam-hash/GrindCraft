#include <stdio.h>

int main()
{
    int rows, cols;
    int i, j;

    printf("How many rows? ");
    scanf("%d", &rows);
    printf("How many columns? ");
    scanf("%d", &cols);

   
    int a[50][50];
    int t[50][50];

    printf("\nEnter the elements of the matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    
    printf("\nOriginal Matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose Matrix:\n");
    for(i = 0; i < cols; i++)
    {
        for(j = 0; j < rows; j++)
        {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
