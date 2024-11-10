#include <stdio.h>
#include <string.h>

void reverse(char sentence[99]) {
    int len = strlen(sentence);
    int start = 0;

    for (int i = 0; i <= len; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i] == '\0') {
            for (int j = i - 1; j >= start; j--) {
                printf("%c", sentence[j]);
            }
            if (sentence[i] != '\0') {
                printf(" ");
            }
            start = i + 1;
        }
    }
}

int main() {
    char sentence[99];
    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);
    reverse(sentence);
    return 0;
