#include <stdio.h>
#include <string.h>

void sort_sentence(char *sentence) {
    int i, j, len = strlen(sentence);
    char temp;

    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            if (sentence[i] > sentence[j]) {
                temp = sentence[i];
                sentence[i] = sentence[j];
                sentence[j] = temp;
            }
        }
    }
}
int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);

    sort_sentence(sentence);

    printf("Sorted sentence: %s", sentence);

    return 0;
}
