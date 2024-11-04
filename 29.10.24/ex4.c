// Write a recursive function isPalindrome(char str[], int start, int end) that checks if a string is a palindrome. In main, read a string from the user, call isPalindrome, and display whether the string is a palindrome.
#include <stdio.h>

int isPalindrome(char str[], int start, int end) {
    if (start >= end) return 1; 
    if (str[start] != str[end]) return 0; 

    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str); 

    int length = 0;
    while (str[length] != '\0') {
        length++; 
    }

    if (isPalindrome(str, 0, length - 1)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
