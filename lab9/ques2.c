#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("output.txt", "r");   
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("File content (character by character):\n");

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);                 
    }

    fclose(fp);                      
    return 0;
}
