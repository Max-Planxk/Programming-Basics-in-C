#include <stdio.h>
#include <string.h>

// Function to remove duplicate characters, keeping first occurrence
void removeDuplicates(char str[]) {
    int seen[256] = {0};  // ASCII table tracker, all set to 0 (not seen)
    int writeIndex = 0;   // position to write next unique character

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // If character hasn't been seen before
        if (seen[(int)ch] == 0) {
            seen[(int)ch] = 1;          // mark as seen
            str[writeIndex] = ch;       // write it to front
            writeIndex++;
        }
        // if already seen, just skip it
    }

    str[writeIndex] = '\0';  // null-terminate the modified string
}

int main() {
    char str1[] = "programming";
    char str2[] = "hello";
    char str3[] = "aabbccdd";
    char str4[] = "abcdef";       // no duplicates
    char str5[] = "aaaaaaa";      // all same characters
    char str6[] = "Hello World";  // with space and mixed case

    printf("======================================\n");
    printf("   Remove Duplicates from String      \n");
    printf("======================================\n");

    // store originals for display
    char orig1[] = "programming";
    char orig2[] = "hello";
    char orig3[] = "aabbccdd";
    char orig4[] = "abcdef";
    char orig5[] = "aaaaaaa";
    char orig6[] = "Hello World";

    removeDuplicates(str1);
    removeDuplicates(str2);
    removeDuplicates(str3);
    removeDuplicates(str4);
    removeDuplicates(str5);
    removeDuplicates(str6);

    printf("Original: %-15s -> Result: %s\n", orig1, str1);
    printf("Original: %-15s -> Result: %s\n", orig2, str2);
    printf("Original: %-15s -> Result: %s\n", orig3, str3);
    printf("Original: %-15s -> Result: %s\n", orig4, str4);
    printf("Original: %-15s -> Result: %s\n", orig5, str5);
    printf("Original: %-15s -> Result: %s\n", orig6, str6);

    printf("======================================\n");

    return 0;
}