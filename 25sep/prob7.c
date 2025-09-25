#include <stdio.h>


void countWords(char str[]) {
    int i = 0, words = 0;
    while(str[i] != '\0') {
        if(str[i] != ' ' && str[i] != '\n') {           
            if(str[i+1] == ' ' || str[i+1] == '\n' || str[i+1] == '\0') {
                words++;                                 
            }
        }
        i++;
    }
    printf("Total words: %d\n", words);
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countWords(str);  
    return 0;
}
