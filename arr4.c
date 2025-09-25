#include <stdio.h>
int main() {
    int arr[8], i, j, count;

    printf("Enter Numbers:");
    for (i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);   
    }

    printf("Duplicate Elements:\n");
    for (i = 0; i < 8; i++) {
        count = 0;

       
        for (j = 0; j < 8; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > 1) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}