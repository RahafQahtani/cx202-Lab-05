#include <stdio.h>

// Function to calculate the length of the sentence
int string_length(char sentence[]) {
    int length = 0;
    while (sentence[length] != '\0') {
        length++;
    }
    return length;
}

// Function to count the number of words in the sentence
int num_of_words(char sentence[], int str_length) {
    int words = 0;
    for (int i = 0; i < str_length; i++) {
        // Check for transition from a space to a non-space character
        if ((i == 0 || sentence[i - 1] == ' ') && sentence[i] != ' ') {
            words++;
        }
    }
    return words;
}

// Function to count the total number of vowels in the sentence
int num_of_vowels(char sentence[], int str_length) {
    int vowels = 0;
    for (int i = 0; i < str_length; i++) {
        char ch = sentence[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
    }
    return vowels;
}

// Function to calculate the frequency of vowels
void vowel_freq(char sentence[], int frequencies[]) {
    for (int i = 0; sentence[i] != '\0'; i++) {
        char ch = sentence[i];
        switch (ch) {
            case 'a': case 'A': frequencies[0]++; break;
            case 'e': case 'E': frequencies[1]++; break;
            case 'i': case 'I': frequencies[2]++; break;
            case 'o': case 'O': frequencies[3]++; break;
            case 'u': case 'U': frequencies[4]++; break;
        }
    }
}

int main() {
    char sentence[100];
    int frequencies[5] = {0}; // Array to store frequencies of 'a', 'e', 'i', 'o', 'u'

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int length = string_length(sentence);
    printf("Length of the sentence: %d\n", length);

    int word_count = num_of_words(sentence, length);
    printf("Number of words: %d\n", word_count);

    int vowel_count = num_of_vowels(sentence, length);
    printf("Number of vowels: %d\n", vowel_count);

    vowel_freq(sentence, frequencies);
    printf("Frequency of vowels:\n");
    printf("a: %d\n", frequencies[0]);
    printf("e: %d\n", frequencies[1]);
    printf("i: %d\n", frequencies[2]);
    printf("o: %d\n", frequencies[3]);
    printf("u: %d\n", frequencies[4]);

    return 0;
}
