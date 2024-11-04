// Write a function reverseString(char *str) that reverses a given string in place using pointers. In main, read a string, call reverseString, and display the reversed string.
#include <stdio.h>

void reverseString(char *str) {
    char *start = str;          
    char *end = str;            

    while (*end != '\0') {
        end++;
    }
    end--; 

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100]; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    reverseString(str); 
    printf("Reversed string: %s\n", str); 
    return 0;
}
