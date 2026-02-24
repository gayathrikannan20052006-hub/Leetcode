#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LEN 1000

bool wordPattern(char *pattern, char *s) {
    char *words[MAX_LEN];
    int wordCount = 0;
    char *token = strtok(s, " ");
    while (token != NULL) {
        words[wordCount++] = token;
        token = strtok(NULL, " ");
    }
    if (strlen(pattern) != wordCount) {
        return false;
    }
    char char_to_word[256] = {0}; 
    char word_to_char[MAX_LEN][256] = {0};

    for (int i = 0; i < wordCount; i++) {
        char charKey = pattern[i];
        char *word = words[i];
        if (char_to_word[charKey] != 0) {
            if (strcmp(word, word_to_char[charKey]) != 0) {
                return false;
            }
        } else {
            char_to_word[charKey] = 1; 
            strcpy(word_to_char[charKey], word); 
        }
        for (int j = 0; j < 256; j++) {
            if (strcmp(word, word_to_char[j]) == 0) {
                if (j != charKey) {
                    return false; 
                }
                break;
            }
        }
    }
    return true;
}
