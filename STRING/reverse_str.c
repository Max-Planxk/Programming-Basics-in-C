/*
— Reverse a String In-Place
Your task: Write a C function reverseString(char str[]) that reverses the string without using a second array.
*/
#include <stdio.h>
#include <string.h>

// Function to reverse a string in-place
void reverseString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        // Swap characters at start and end
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move pointers inward
        start++;
        end--;
    }
}

int main() {
    char str1[] = "MANAS";
    char str2[] = "RITIKA";
    char str3[] = "ILOVEYOU";
    char str4[] = "1405";         // single character edge case
    char str5[] = "";          // empty string edge case

    printf("Original: %-15s -> Reversed: ", str1);
    reverseString(str1);
    printf("%s\n", str1);

    printf("Original: %-15s -> Reversed: ", str2);
    reverseString(str2);
    printf("%s\n", str2);

    printf("Original: %-15s -> Reversed: ", str3);
    reverseString(str3);
    printf("%s\n", str3);

    printf("Original: %-15s -> Reversed: ", str4);
    reverseString(str4);
    printf("%s\n", str4);

    printf("Original: %-15s -> Reversed: ", str5);
    reverseString(str5);
    printf("%s\n", str5);

    return 0;
}