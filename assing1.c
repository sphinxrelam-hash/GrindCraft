#include <stdio.h>

int main() {
    int arr[8], uniq[8];
    int i, j, Count = 0;
    int Duplicate;

    printf("Enter 8 numbers:\n");
    for (i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 8; i++) {
        Duplicate = 0; 

        for (j = 0; j < Count; j++) {
            if (arr[i] == uniq[j]) {
                Duplicate = 1;
                break;
            }
        }

        
        if (!Duplicate) {
            uniq[Count] = arr[i];
            Count++;
        }
    }

    
    printf("Array after removing duplicates:\n");
    for (i = 0; i < Count; i++) {
        printf("%d ", uniq[i]);
    }
    printf("\n");

    return 0;
}
