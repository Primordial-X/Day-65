#include <stdio.h>
#include <string.h>

// Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase).
// The task is to determine if s and t are valid anagrams, 
// meaning they contain the same characters with the same frequencies.
// Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/

int main() {
    char s[100], t[100];
    int count1[26] = {0}, count2[26] = {0};

    printf("Enter first string: ");
    fgets(s, sizeof(s), stdin);
    printf("Enter second string: ");
    fgets(t, sizeof(t), stdin);

    // Count frequency of each character in s
    for (int i = 0; s[i] != '\n' && s[i] != '\0'; i++) {
        count1[s[i] - 'a']++;
    }

    // Count frequency of each character in t
    for (int i = 0; t[i] != '\n' && t[i] != '\0'; i++) {
        count2[t[i] - 'a']++;
    }

    // Compare the two frequency arrays
    int isAnagram = 1;
    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
