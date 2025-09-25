#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, len = 0, maxLen = 0, start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        if(str[i] != ' ' && str[i] != '\n') {
            len++;
        } else {
            if(len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
            start = i + 1;
        }
        i++;
    }

    
    if(len > maxLen) {
        maxLen = len;
        maxStart = start;
    }

    printf("Longest word: ");
    for(i = maxStart; i < maxStart + maxLen; i++)
        putchar(str[i]);
    printf("\n");

    return 0;
}
