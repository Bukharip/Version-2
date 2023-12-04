// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

// V1
// Begining of the function which was made to demonstrate string concatenation based on user input
void manipulating(void) {
    // Notify user of start of concatenation demo
    printf("*** Start of Concatenating Strings Demo ***\n");
    char string1[BUFFER_SIZE];
    char string2[BUFFER_SIZE];
    // Loop to allow continuous operation until user decides to quit
    do {
        printf("Type the 1st string (q - to quit):\n");
        fgets(string1, BUFFER_SIZE, stdin);
        string1[strlen(string1) - 1] = '\0';
        // If user enters 'q', do not proceed with concatenation
        if ((strcmp(string1, "q") != 0)) {
            printf("Type the 2nd string:\n");
            fgets(string2, BUFFER_SIZE, stdin);
            string2[strlen(string2) - 1] = '\0';
            strcat(string1, string2);
            // Output the concatenated result
            printf("Concatenated string is '%s'\n", string1);
        }
    } while (strcmp(string1, "q") != 0);
    // Indicate the end of the concatenation demo
    printf("*** End of Concatenating Strings Demo ***\n");

    // V2
    printf("*** Start of Comparing Strings Demo ***\n");  // Print the starting message of the string comparison demo
    // Declare two character arrays to hold the strings to be compared
    char compare1[BUFFER_SIZE];
    char compare2[BUFFER_SIZE];
    int result;
    do {  // Begin a loop that will continue until the user decides to exit
        printf("Type the 1st string to compare (q - to quit):\n");
        fgets(compare1, BUFFER_SIZE, stdin);   // Read the first string from standard input
        compare1[strlen(compare1) - 1] = '\0';  // Replace the newline character with a null terminator to end the string
        if (strcmp(compare1, "q") != 0) {  // If the user types 'q', exit the loop
            printf("Type the 2nd string to compare:\n");
            fgets(compare2, BUFFER_SIZE, stdin);
            compare2[strlen(compare2) - 1] = '\0';
            result = strcmp(compare1, compare2);
            if (result < 0)  // If result is less than 0, the first string comes before the second string
                printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
            else if (result == 0)
                printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
            else
                printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
        }
    } while (strcmp(compare1, "q") != 0);
    printf("*** End of Comparing Strings Demo ***\n");  // Print the ending message of the string comparison demo

}
