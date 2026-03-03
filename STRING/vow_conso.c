//vowels & consonants in a string
#include <stdio.h>
#include <ctype.h>

// Function to count vowels and consonants
void countVowelsConsonants(char str[]) {
    int vowels = 0;
    int consonants = 0;
    int i = 0;

    while (str[i] != '\0') {
        // Convert to lowercase for easy comparison
        char ch = tolower(str[i]);

        // Check if it's an alphabet letter
        if (ch >= 'a' && ch <= 'z') {
            // Check if it's a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        // spaces, digits, symbols are ignored automatically
        i++;
    }

    printf("String:     \"%s\"\n", str);
    printf("Vowels:      %d\n", vowels);
    printf("Consonants:  %d\n", consonants);
    printf("----------------------------\n");
}

int main() {
    char str1[] = "Hello World";
    char str2[] = "C Programming";
    char str3[] = "aeiou";           // all vowels
    char str4[] = "rhythm";          // no vowels
    char str5[] = "Hello 123 !!";    // with digits and symbols

    countVowelsConsonants(str1);
    countVowelsConsonants(str2);
    countVowelsConsonants(str3);
    countVowelsConsonants(str4);
    countVowelsConsonants(str5);

    return 0;
}