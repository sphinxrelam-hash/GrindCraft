#include<stdio.h>
int main(){
int n;
printf("ENter the size of arrays:");
scanf("%d", &n);


  int a[50], b[50];

    printf("Enter %d elements of first array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter %d elements of second array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
   int same = 1;  
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            same = 0;      
            break;         
        }
    }

    if (same) {
        printf("Both arrays have the same elements in the same order.\n");
    } else {
        printf("Arrays are NOT the same.\n");
    }

    return 0;
}

