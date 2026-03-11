#include <stdio.h>
#include <string.h>

int main() {
    FILE *inFile, *outFile;
    char word[100], find[50], replace[50];

    inFile = fopen("input7.txt", "r");
    outFile = fopen("out7.txt", "w");

    printf("Enter word to find: ");
    scanf("%s", find);

    printf("Enter word to replace: ");
    scanf("%s", replace);

    while (fscanf(inFile, "%s", word) != EOF) {
        if (strcmp(word, find) == 0) {
            fprintf(outFile, "%s ", replace);
        } else {
            fprintf(outFile, "%s ", word);
        }
    }

    fclose(inFile);
    fclose(outFile);

    return 0;
}
