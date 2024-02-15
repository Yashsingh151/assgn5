#include <stdio.h>
#include <string.h>

int main() {
    
    char characters[] = {'a', 'h', 'k', 's', 'y', 'd'};
    char word[100];
    int count[26] = {0};

    printf("Enter a word: ");
    scanf("%s", word);

    // Counting the occurrence of each character in the word
    for (int i = 0; i < strlen(word); i++) {
        count[word[i] - 'a']++;
    }

    // Checking if the characters required to form the word are available
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0 && characters[i] == '\0') {
            printf("The word cannot be formed.\n");
            return 0;
        }
    }

    printf("The word can be formed.\n");

    return 0;
}