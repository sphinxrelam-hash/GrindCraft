#include <stdio.h>

int main() {
    FILE *fp = fopen("hello.txt", "r");
    char ch, prev = ' ';
    int chars = 0, words = 0;

    if (fp == NULL) {
        printf("File not found!\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch != ' ' && ch != '\n' && ch != '\t' && 
            (prev == ' ' || prev == '\n' || prev == '\t'))
            words++;
        prev = ch;
    }

    printf("Characters: %d\nWords: %d\n", chars, words);
    fclose(fp);
    return 0;
}
