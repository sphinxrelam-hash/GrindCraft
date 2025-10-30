#include <stdio.h>

int main() {
    FILE *fp = fopen("hello.txt", "r");
    int ch, empty = 1;

    if (fp == NULL) {
        printf("File not found!\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch != ' ' && ch != '\n' && ch != '\t') {
            empty = 0;
            break;
        }
    }

    if (empty)
        printf("File is empty.\n");
    else
        printf("File has content.\n");

    fclose(fp);
    return 0;
}
