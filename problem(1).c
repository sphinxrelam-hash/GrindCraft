#include <stdio.h>
int main() {
FILE*fp;
fp = fopen("hello.txt","r");
if (fp == NULL){
    printf("FILE NOT FOUND!!!\n");
    return 1;
}
 fseek(fp, 0, SEEK_END);
    if (ftell(fp) == 0)
        printf("File is empty.\n");
    else
        printf("File has content.\n");

    fclose(fp);
    return 0;

}