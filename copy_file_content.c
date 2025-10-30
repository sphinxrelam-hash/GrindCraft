#include <stdio.h>

int main() {
    FILE *src, *dest;
    char line[200];

    src = fopen("1.txt", "r");
    dest = fopen("2.txt", "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening file!\n");
        return 0;
    }

    while (fgets(line, sizeof(line), src) != NULL)
        fprintf(dest, "%s", line);

    printf("File copied successfully!\n");

    fclose(src);
    fclose(dest);
    return 0;
}
