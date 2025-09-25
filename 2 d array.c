#include <stdio.h>

int main()
{
    int arr[3][3];
    int i, j;
    int DiagSum = 0;      
    int secDiagSum = 0; 

    printf("Enter 9 elements for a 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

   
    for(i = 0; i < 3; i++)
    {
        DiagSum += arr[i][i];           
        secDiagSum += arr[i][2 - i];  
    }

    printf("\nMatrix is:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }

    printf("\nSum of main diagonal = %d\n", DiagSum);
    printf("Sum of secondary diagonal = %d\n", secDiagSum);

    return 0;
}
