//WAP to accept a string from a user and cunt the number of A in that string 

#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'A' || str[i] == 'a') {  
            count++;
        }
    }

    printf("Number of 'A' or 'a' in the string: %d\n", count);

    return 0;
}
