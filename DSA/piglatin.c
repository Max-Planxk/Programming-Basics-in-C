/*
🐷 Pig Latin Rules (Simple Version)

For a single word:

If the word starts with a consonant →
Move the first letter to the end and add "ay"

hello → ellohay

If the word starts with a vowel →
Add "way" at the end

apple → appleway
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isvowel(char ch){
    ch =tolower(ch);
    return (ch== 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');

}
int main (){
    char word[100];
    printf("ENTER A WORD:\n");
    scanf("%s",word);

    if(isvowel(word[0])){
        //word starts with vowel
        printf("PIG LATIN: %Sway\n", word);}
        else{
            //words start with consonant
            int len = strlen(word);

        for (int i = 1; i < len; i++) {
            printf("%c", word[i]);
        }
        printf("%cay\n", word[0]);
    }
    return 0;
}
