#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome (ignore case)
int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        // Convert both characters to lowercase for comparison
        char left  = tolower(str[start]);
        char right = tolower(str[end]);

        if (left != right) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Is a palindrome
}

int main() {
    char str1[] = "Racecar";
    char str2[] = "hello";
    char str3[] = "Madam";
    char str4[] = "Level";
    char str5[] = "OpenAI";
    char str6[] = "A";        // single character edge case
    char str7[] = "";         // empty string edge case

    char *strings[] = {str1, str2, str3, str4, str5, str6, str7};
    int total = 7;

    printf("============================\n");
    printf("   Palindrome Checker in C  \n");
    printf("============================\n");

    for (int i = 0; i < total; i++) {
        if (isPalindrome(strings[i])) {
            printf("%-12s ->  It IS a palindrome\n", strings[i]);
        } else {
            printf("%-12s ->  It is NOT a palindrome\n", strings[i]);
        }
    }

    printf("============================\n");

    return 0;
}