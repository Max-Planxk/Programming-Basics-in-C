#include <stdio.h>
#include <string.h> // Required for strlen()

int main() {
    char string[20];
    int i, length;
    int flag = 0; // flag = 0 means palindrome

    printf("Enter the string: "); 
    scanf("%s", string);

    length = strlen(string); 

    for (i = 0; i < length / 2; i++) {
        if (string[i] != string[length - i - 1]) {
            flag = 1; // Mismatch found, not a palindrome
            break;
        }
    }

    if (flag) {
        printf("%s is not a palindrome string\n", string);
    } else {
        printf("%s is a palindrome string\n", string);
    }

    return 0;
}
