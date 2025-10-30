#include <stdio.h>

int main() {
    FILE *fp = fopen("hello.txt", "r");
    char ch;
    int spaces = 0;

    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
        if (ch == ' ')
            spaces++;

    printf("Number of spaces: %d\n", spaces);
    fclose(fp);
    return 0;
}
