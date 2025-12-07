#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("output.txt", "w");   
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    printf("Enter text to write into file: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);                 

    fclose(fp);                      
    printf("File created and text written successfully.\n");

    return 0;
}
