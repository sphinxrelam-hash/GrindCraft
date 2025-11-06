#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nYou entered:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n\nEnter new size: ");
    scanf("%d", &n);

    arr = (int*) realloc(arr, n * sizeof(int));

    printf("Enter %d new numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nUpdated array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);

    return 0;
}
