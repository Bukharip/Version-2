// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"

// V1
// Begining of the unction to demonstrate the tokenization of strings into words
void tokenizing(void) {
    // Announce the beginning of the tokenizing words demo
    printf("*** Start of Tokenizing Words Demo ***\n");
    char words[BUFFER_SIZE];
    char* nextWord = NULL;
    int wordsCounter;
    // Do-while loop which is continuously prompting the user for words to tokenize until 'q' is entered
    do {
        printf("Type a few words separated by space (q - to quit):\n");
        fgets(words, BUFFER_SIZE, stdin);
        words[strlen(words) - 1] = '\0';
        // Check if the user wants to quit the demo
        if (strcmp(words, "q") != 0) {
            nextWord = strtok(words, " ");
            wordsCounter = 1;
            // Continue to find and print words until there are no more tokens
            while (nextWord) {
                printf("Word #%d is '%s'\n", wordsCounter++, nextWord);
                nextWord = strtok(NULL, " ");
            }
        }
    } while (strcmp(words, "q") != 0);
    // Signal the end of the tokenizing words demo
    printf("*** End of Tokenizing Words Demo ***\n");
    
    // V2
    printf("*** Start of Tokenizing Phrases Demo ***\n");  // Display the starting message of the tokenizing phrases demo
    char phrases[BUFFER_SIZE];  // Declare a buffer to hold the input phrases with a size defined by BUFFER_SIZE
    char* nextPhrase = NULL;  // Declare a pointer for tracking the next phrase in the tokenization process
    int phrasesCounter;  // Declare a counter to keep track of the number of phrases
    do {  // Start a loop that allows the user to input phrases until they choose to quit with 'q'
        printf("Type a few phrases separated by comma (q - to quit):\n");
        fgets(phrases, BUFFER_SIZE, stdin);
        phrases[strlen(phrases) - 1] = '\0';  // Replace the newline character with a null terminator to properly end the string
        if ((strcmp(phrases, "q") != 0)) {  // Check if the input is not 'q', which indicates the user wants to quit
            nextPhrase = strtok(phrases, ",");
            phrasesCounter = 1;
            while (nextPhrase) {
                printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
                nextPhrase = strtok(NULL, ",");   // Use strtok with NULL as the first argument to find the next token
            }
        }
    } while (strcmp(phrases, "q") != 0);
    printf("*** End of Tokenizing Phrases Demo ***\n");  // Display the ending message of the tokenizing phrases demo


    // v3
    printf("*** Start of Tokenizing Sentences Demo ***\n");
    // Declare a character array to store the input sentences and a pointer for tracking the next sentence.
    char sentences[BUFFER_SIZE]; // This array will hold the entire string input by the user.
    char* nextSentence = NULL; // This pointer will be used to point to the next tokenized sentence.
    int sentencesCounter; // Variable to keep count of the sentences as they are tokenized.
    do {
        printf("Type a few sentences separated by dot(q - to quit):\n");
        fgets(sentences, BUFFER_SIZE, stdin);
        sentences[strlen(sentences) - 1] = '\0'; // Overwrite the newline character inserted by fgets with a null terminator to end the string.
        if ((strcmp(sentences, "q") != 0)) { // Check if the user has entered 'q' to quit the demo.
            nextSentence = strtok(sentences, "."); // Use the strtok function to find the first sentence (token) in the string, using the dot as a delimiter.
            sentencesCounter = 1; // Initialize the sentence counter.
            while (nextSentence) { // Loop to continue tokenizing the rest of the sentences.
                printf("Sentence #%d is '%s'\n", sentencesCounter++, nextSentence);
                nextSentence = strtok(NULL, "."); // Use strtok with a NULL parameter to get the next sentence in the string.
            }
        }
    } while (strcmp(sentences, "q") != 0);
    printf("*** End of Tokenizing Sentences Demo ***\n"); // Print a message to indicate the end of the tokenizing sentences demo.

}
