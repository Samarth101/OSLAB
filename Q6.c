#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int wordCount = 0;
    int inWord = 0;

    fp = fopen("input6.txt", "r");

    while ((ch = fgetc(fp)) != EOF) {
        if (isspace(ch)) {
            inWord = 0;   
        } else if (!inWord) {
            inWord = 1;   
            wordCount++;
        }
    }

    fclose(fp);

    printf("Number of words: %d\n", wordCount);
    return 0;
}
