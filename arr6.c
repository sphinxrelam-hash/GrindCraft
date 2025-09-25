#include <stdio.h>

int main() {
    int arr[8], i;
    int min, max;

    printf("Enter 8 numbers:\n");
    for (i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }

    min = max = arr[0];

    for (i = 1; i < 8; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Minimum element = %d\n", min);
    printf("Maximum element = %d\n", max);

    return 0;
}
