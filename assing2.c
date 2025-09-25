#include <stdio.h>

int main() {
    int n, i;
    int esum = 0, osum = 0;

    printf("How many numbers? ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            esum += arr[i];
        } else {
            osum += arr[i];
        }
    }

    printf("Sum of even numbers = %d\n", esum);
    printf("Sum of odd numbers  = %d\n", osum);

    return 0;
}