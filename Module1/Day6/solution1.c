 #include <stdio.h>

int main() {
    FILE *sourceFile, *targetFile;
    char sourcePath[100], targetPath[100];
    char ch;

     
    printf("Enter the path of the source file: ");
    scanf("%s", sourcePath);

     
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }


    printf("Enter the path of the target file: ");
    scanf("%s", targetPath);

     
    targetFile = fopen(targetPath, "w");
    if (targetFile == NULL) {
        printf("Failed to create the target file.\n");
        fclose(sourceFile);
        return 1;
    }

     
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, targetFile);
    }

     
    fclose(sourceFile);
    fclose(targetFile);

    printf("File copied successfully.\n");

    return 0;
}
