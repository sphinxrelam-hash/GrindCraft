#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("a AND b = %d\n", a & b);
    printf("a OR b = %d\n", a | b);
    printf("NOT a = %d\n", ~a);

    return 0;
}
