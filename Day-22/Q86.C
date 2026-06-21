//Write a program to Count words in a sentence. 
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    int count = 0, i;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++) {
        if ((sentence[i] != ' ' && sentence[i + 1] == ' ') ||
            (sentence[i] != ' ' && sentence[i + 1] == '\0') ||
            (sentence[i] != ' ' && sentence[i + 1] == '\n')) {
            count++;
        }
    }

    printf("Number of words = %d\n", count);

    return 0;
}