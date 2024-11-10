#include <stdio.h>
#include <string.h>
void find_longest_word(const char *sentence) {
    int i, j, max_len = 0, current_len = 0;
    int start_index = 0;
    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') {
            if (current_len > max_len) {
                max_len = current_len;
                start_index = i - current_len;
            }
            current_len = 0;
        } else {
            current_len++;
        }
    }
    if (current_len > max_len) {
        max_len = current_len;
        start_index = i - current_len;
    }
    printf("The longest word is: ");
    for (i = start_index; i < start_index + max_len; i++) {
        printf("%c", sentence[i]);
    }
    printf("\n");
}
int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);

    find_longest_word(sentence);

    return 0;
}
