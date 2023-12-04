// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10
#include "fundamentals.h"

void fundamentals(void) {

    // V1
    // Starting the indexing demonstration
    printf("*** Start of Indexing Strings Demo ***\n");
    char buffer1[BUFFER_SIZE];
    char numInput[NUM_INPUT_SIZE];
    size_t position;
    // The do-while loop which continues until the user inputs 'q' to quit
    do {
        printf("Type not empty string (q - to quit):\n");
        fgets(buffer1, BUFFER_SIZE, stdin);
        buffer1[strlen(buffer1) - 1] = '\0';
        // If statement with input 'q' which exit the loop
        if (strcmp(buffer1, "q") != 0) {
            printf("Type the character position within the string:\n");
            fgets(numInput, NUM_INPUT_SIZE, stdin);
            numInput[strlen(numInput) - 1] = '\0';
            position = atoi(numInput);
            // Check if the position is within the bounds of the string length
            if (position >= strlen(buffer1)) {
                position = strlen(buffer1) - 1;
                printf("Too big... Position reduced to max. available\n");
            }
            printf("The character found at %d position is '%c'\n",
                (int)position, buffer1[position]);
        }
    } while (strcmp(buffer1, "q") != 0);
    // Indicating the end of the indexing demo
    printf("*** End of Indexing Strings Demo ***\n");

    // V2
    printf("*** Start of Measuring Strings Demo ***\n");  // Print the introduction message for the string measuring demo
    char buffer2[BUFFER_SIZE];  // Declare a character array to store the input string, with a size defined by BUFFER_SIZE
    do {  // Enter a loop that allows the user to repeatedly input strings until they choose to quit
        printf("Type a string (q - to quit):\n");
        fgets(buffer2, BUFFER_SIZE, stdin);   // Read the string from the user input, ensuring not to exceed the buffer size
        buffer2[strlen(buffer2) - 1] = '\0';
        if (strcmp(buffer2, "q") != 0) {
            printf("The length of \'%s\' is %d characters\n", buffer2, (int)strlen(buffer2));
        }
    } while (strcmp(buffer2, "q") != 0);
    printf("*** End of Measuring Strings Demo ***\n");  // Print the conclusion message for the string measuring demo

}
