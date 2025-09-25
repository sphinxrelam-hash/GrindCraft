#include <stdio.h>
int main() {
    int x, i  ;
    printf("Enter how many numbers: ");
    scanf("%d", &x);

    int arr[x];
    printf("Enter %d numbers:\n", x);
    for (i = 0; i < x; i++) {
        scanf("%d", &arr[i]);   
    }

    printf("You entered:\n");
    for (i = 0; i < x; i++) {
        printf("%d ", arr[i]);  

    
}

    for (i = 0; i < x / 2; i++) 
    {
        int temp = arr[i];
        arr[i] = arr[x - i - 1];
        arr[x- i - 1] = temp;
    }
     printf("\n");
     
    printf("Reversed array:\n");
    for (i = 0; i < x; i++) {
        printf("%d ", arr[i]);
    }
         return 0;
}

