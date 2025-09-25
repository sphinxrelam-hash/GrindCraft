#include <stdio.h>

void countChars(char str[]) {
    int i = 0;
    int alphabets = 0, digits = 0, special = 0;

    while(str[i] != '\0') {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            alphabets++;
        else if(str[i] >= '0' && str[i] <= '9')
            digits++;
        else if(str[i] != ' ' && str[i] != '\n')
            special++;
        i++;
    }

    printf("Alphabets: %d\nDigits: %d\nSpecial characters: %d\n", alphabets, digits, special);
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countChars(str);  
    return 0;
}
