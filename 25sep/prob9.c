#include <stdio.h>

void swapCase(char str[]) {
    int i = 0;
    while(str[i] != '\0') {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;   
        else if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;   
        i++;
    }
    printf("Modified sentence: %s", str);
}

int main() {
    char str[1000];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    swapCase(str);  
    return 0;
}
