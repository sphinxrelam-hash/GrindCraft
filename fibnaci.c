#include <stdio.h>

int main() {
    int x = 0, y = 1, f = 0, z, n, num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("%d %d ", x, y);

    for (n = 2; n < 13; n++) {
        z = x + y;
        printf("%d ", z);
        x = y;
        y = z;

        if (z == num) {
            f = 1;
            break;
        }
    }

    if (f)
        printf("\n%d is a Fibonacci number.\n", num);
    else
        printf("\n%d is NOT a Fibonacci number.\n", num);

    return 0;
}