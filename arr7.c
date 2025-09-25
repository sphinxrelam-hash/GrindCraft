#include <stdio.h>

int main() {
    int arr[8], i, j, temp;

    printf("Enter 8 numbers:\n");
    for (i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort
    for (i = 0; i < 8 - 1; i++) {       
        for (j = 0; j < 8 - i - 1; j++) { 
            if (arr[j] > arr[j + 1]) {    
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Array in ascending order:\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
