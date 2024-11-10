#include <stdio.h>
#include <string.h>

void word_frequency(const char *sentence) {
    char words[100][50];
    int count[100] = {0};
    int word_count = 0;
    char word[50];
    int word_len = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if ((sentence[i] >= 'a' && sentence[i] <= 'z') || (sentence[i] >= 'A' && sentence[i] <= 'Z') || (sentence[i] >= '0' && sentence[i] <= '9')) {
            word[word_len++] = (sentence[i] >= 'A' && sentence[i] <= 'Z') ? sentence[i] + 32 : sentence[i];
        } else if (word_len > 0) {
            word[word_len] = '\0';
            int found = 0;
            for (int j = 0; j < word_count; j++) {
                if (strcmp(words[j], word) == 0) {
                    count[j]++;
                    found = 1;
                    break;
                }
            }
            if (!found && word_count < 100) {
                strcpy(words[word_count], word);
                count[word_count] = 1;
                word_count++;
            }
            word_len = 0;
        }
    }

    printf("Word frequencies:\n");
    for (int i = 0; i < word_count; i++) {
        printf("%s: %d\n", words[i], count[i]);
    }
}

int main() {
    const char *sentence = "Hello world, hello C. Hello world!";
    word_frequency(sentence);
    return 0;
}
