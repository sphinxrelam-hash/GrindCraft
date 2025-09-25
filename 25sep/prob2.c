#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, alphabets = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            alphabets++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if (str[i] != ' ' && str[i] != '\n')
            special++;
        i++;
    }

    printf("Alphabets: %d\nDigits: %d\nSpecial characters: %d\n", alphabets, digits, special);
    return 0;
}
