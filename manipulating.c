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


    // v3
    printf("*** Start of Searching Strings Demo ***\n");
    // Declare two arrays to hold the strings for the search.
    char haystack[BUFFER_SIZE]; // This will hold the main string to be searched.
    char needle[BUFFER_SIZE]; // This will hold the substring to search for within the haystack.
    char* occurrence = NULL; // Declare a pointer to char that will point to the location of the found substring within the haystack.
    do { // Begin a loop that will continue until the user decides to exit.
        printf("Type the string (q - to quit):\n");
        fgets(haystack, BUFFER_SIZE, stdin);
        haystack[strlen(haystack) - 1] = '\0'; // Replace the newline character from the input with a null terminator to end the string properly.
        if (strcmp(haystack, "q") != 0) { // Check if the user input is not 'q', which is the command to quit the demo.
            printf("Type the substring:\n");
            fgets(needle, BUFFER_SIZE, stdin);
            needle[strlen(needle) - 1] = '\0'; // Replace the newline character from the input with a null terminator to end the string properly.
            occurrence = strstr(haystack, needle); // Use strstr function to search for the needle in the haystack. strstr returns a pointer to the first occurrence of the needle in the haystack, or NULL if the needle is not found.
            if (occurrence)  // If the needle is found within the haystack, calculate and print its position.
                printf("\"%s\" found at %d position\n", needle, (int)(occurrence - haystack));
            else
                printf("Not found\n"); 
        }
    } while (strcmp(haystack, "q") != 0); // The loop will continue until 'q' is entered.
    printf("*** End of Searching Strings Demo ***\n");
}
