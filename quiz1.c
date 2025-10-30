#include <stdio.h>

int main() {
    int num, temp, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  

    while (num > 0) {
        rem = num % 10;         
        rev = rev * 10 + rem;   
        num = num / 10;         
    }

    if (temp == rev)
        printf("It is a palindrome number.");
    else
        printf("It is not a palindrome number.");

    return 0;
}
