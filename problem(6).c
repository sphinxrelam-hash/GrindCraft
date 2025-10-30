#include <stdio.h>

int main() {
    FILE *fp = fopen("hello.txt", "r");
    int num, sum = 0;

    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    } 

    while (fscanf(fp, "%d", &num) == 1)
        sum += num;

    printf("Sum of numbers: %d\n", sum);
    fclose(fp);
    return 0;
}
