//WAP to accept two values from a user ppass these values to a function to compute the sum of thesse numbers return the sum and evualte wheather the returned number is even or odd using an other function


#include <stdio.h>


int add(int x, int y) {
    return x + y;
}


int checkEvenOdd(int number) {
    return (number % 2 == 0) ? 1 : 0; 
}

int main() {
    int a, b, sum;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    
    sum = add(a, b);
    printf("Sum = %d\n", sum);

    if (checkEvenOdd(sum))
        printf("The sum is EVEN.\n");
    else
        printf("The sum is ODD.\n");

    return 0;
}

