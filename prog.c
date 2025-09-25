#include <stdio.h>

int main() {
    int arr[10];
    int i, j;

    printf("Enter 10 numbers :\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

  

   
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int sum = arr[7] + arr[8] + arr[9];
    printf("Three numbers with max sum: %d, %d, %d\n", arr[7], arr[8], arr[9]);
    printf("Maximum sum = %d\n", sum);

    return 0;
}
