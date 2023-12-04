// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

// V1
// Begining of the function which was made to demonstrate conversion of string input to an integer
void converting(void) {
    // Notify user of start of conversion demo
    printf("*** Start of Converting Strings to int Demo ***\n");
    char intString[BUFFER_SIZE];
    int intNumber;
    // Do-while loop to repeatedly prompt for input until 'q' is entered to quit
    do {
        printf("Type an int numeric string (q - to quit):\n");
        fgets(intString, BUFFER_SIZE, stdin);
        intString[strlen(intString) - 1] = '\0';
        // If statement to check for quit condition before proceeding with conversion
        if (strcmp(intString, "q") != 0) {
            intNumber = atoi(intString);
            // Output the result of the conversion
            printf("Converted number is %d\n", intNumber);
        }
    } while (strcmp(intString, "q") != 0);
    // Indicate the end of the conversion demo
    printf("*** End of Converting Strings to int Demo ***\n");

    // V2
    printf("*** Start of Converting Strings to double Demo ***\n");
    // Print the start of the program to the console
    char doubleString[BUFFER_SIZE];
    // Declare a character array to hold the input string
    double doubleNumber;
    // Declare a double to hold the converted numeric value
    do {
        // Start a loop that continues until the user decides to quit
        printf("Type the double numeric string (q - to quit):\n");
        fgets(doubleString, BUFFER_SIZE, stdin);
        // Read the input from the user into the doubleString array
        doubleString[strlen(doubleString) - 1] = '\0';
        if ((strcmp(doubleString, "q") != 0)) {
            doubleNumber = atof(doubleString);
            printf("Converted number is %f\n", doubleNumber);
        }
    } while (strcmp(doubleString, "q") != 0);
    printf("*** End of Converting Strings to double Demo ***\n");
    // Print the end of the program to the console

}
