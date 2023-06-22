#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void convertToUpperCase(FILE *source, FILE *target) {
    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(toupper(ch), target);
    }
}

void convertToLowerCase(FILE *source, FILE *target) {
    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(tolower(ch), target);
    }
}

void convertToSentenceCase(FILE *source, FILE *target) {
    char ch;
    int sentenceStart = 1;
    while ((ch = fgetc(source)) != EOF) {
        if (sentenceStart && isalpha(ch)) {
            fputc(toupper(ch), target);
            sentenceStart = 0;
        } else {
            fputc(tolower(ch), target);
        }
        if (ch == '.' || ch == '?' || ch == '!') {
            sentenceStart = 1;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments.\n");
        printf("Usage: ./cp <option> <source_file> <target_file>\n");
        return 1;
    }

    char *option = argv[1];
    char *sourcePath = argv[2];
    char *targetPath = argv[3];

    FILE *sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }

    FILE *targetFile = fopen(targetPath, "w");
    if (targetFile == NULL) {
        printf("Failed to create the target file.\n");
        fclose(sourceFile);
        return 1;
    }

    if (strcmp(option, "-u") == 0) {
        convertToUpperCase(sourceFile, targetFile);
    } else if (strcmp(option, "-l") == 0) {
        convertToLowerCase(sourceFile, targetFile);
    } else if (strcmp(option, "-s") == 0) {
        convertToSentenceCase(sourceFile, targetFile);
    } else {
        char ch;
        while ((ch = fgetc(sourceFile)) != EOF) {
            fputc(ch, targetFile);
        }
    }

    fclose(sourceFile);
    fclose(targetFile);

    printf("File copied successfully.\n");

    return 0;
}
