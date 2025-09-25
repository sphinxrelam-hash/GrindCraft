#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0)
        printf("Factorial of a negative number doesn't exist.\n");
    else
        printf("Factorial of %d is %d\n", number, factorial(number));

    return 0;
}
