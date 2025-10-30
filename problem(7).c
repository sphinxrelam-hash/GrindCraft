#include <stdio.h>

int main() {
    FILE *fp = fopen("hello.txt", "r");
    char ch, word[100], longest[100];
    int i = 0, maxLen = 0;

    if (fp == NULL) {
        printf("File not found!\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            word[i] = '\0';
            int len = 0;
            while (word[len] != '\0') len++;

            if (len > maxLen) {
                maxLen = len;
                for (int j = 0; j <= len; j++)
                    longest[j] = word[j];
            }
            i = 0;
        } else {
            word[i++] = ch;
        }
    }

    word[i] = '\0';
    int len = 0;
    while (word[len] != '\0') len++;
    if (len > maxLen) {
        for (int j = 0; j <= len; j++)
            longest[j] = word[j];
    }

    printf("Longest word: %s\n", longest);
    fclose(fp);
    return 0;
}
