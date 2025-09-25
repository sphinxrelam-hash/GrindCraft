#include <stdio.h>

int main() {
    int n, i;
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];
    
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int maxDiff = max - min;
    printf("Maximum difference = %d\n", maxDiff);

    return 0;
}