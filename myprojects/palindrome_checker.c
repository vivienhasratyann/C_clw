// CHATGPT-I GRACY

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// // Function to remove spaces from the string
// void remove_spaces(char *str) {
//     int i = 0, j = 0;
//     while (str[i] != '\0') {
//         if (str[i] != ' ') {
//             str[j++] = str[i];
//         }
//         i++;
//     }
//     str[j] = '\0';
// }

// // Function to remove punctuation from the string
// void remove_punctuation(char *str) {
//     int i = 0, j = 0;
//     while (str[i] != '\0') {
//         if (isalnum(str[i])) { // Only keep alphanumeric characters
//             str[j++] = str[i];
//         }
//         i++;
//     }
//     str[j] = '\0';
// }

// // Function to convert all characters to lowercase
// void make_lowercase(char *str) {
//     for (int i = 0; str[i] != '\0'; i++) {
//         str[i] = tolower(str[i]);
//     }
// }

// // Function to check if the string is a palindrome
// int is_palindrome(const char *str) {
//     int left = 0;
//     int right = strlen(str) - 1;

//     while (left < right) {
//         if (str[left] != str[right]) {
//             return 0; // Not a palindrome
//         }
//         left++;
//         right--;
//     }
//     return 1; // Palindrome
// }

// int main() {
//     char s[1000];

//     // Step 1: Read string input from user
//     printf("Enter a string: ");
//     fgets(s, sizeof(s), stdin);

//     // Remove the newline character if present
//     s[strcspn(s, "\n")] = 0;

//     // Step 2: Remove spaces
//     remove_spaces(s);

//     // Step 3: Remove punctuation
//     remove_punctuation(s);

//     // Step 4: Convert to lowercase
//     make_lowercase(s);

//     // Step 5: Check if the string is a palindrome
//     if (is_palindrome(s)) {
//         printf("The string is a palindrome.\n");
//     } else {
//         printf("The string is not a palindrome.\n");
//     }

//     return 0;
// }




// MER SHEDEVRODASATUYI GRACY

// #include <stdio.h>
// #include <stdlib.h>


// int main(){
//     int MAX_CHARACTERS = 1000;
//     char *s = malloc(sizeof(char) * MAX_CHARACTERS);
//     if (!s)
//     {
//         printf("error: failed to allocate memoory.");
//         return 1;
//     }

//     getline(&s, &MAX_CHARACTERS, stdin);

//     // normalize_string(s);
//     if (is_palindrome(s))
//         printf("The provided string is palindrome\n");
//     else
//         printf("The provided string is not palindrome\n");
//     return 0;

// }

// void normalize_string(char *str) {
//     unsigned size = strlen(str);
//     char *str_start = str;
//     char *s = malloc(sizeof(char) * size);
//     if (!s){
//         printf("error: failed to allocate memory.");
//         return 1;
//     }
//     char *s_start = s;
//     while (*str) {
//         if (!(*str == ' ' || *str == '\t' || *str == ',' || *str == '.' || *str == '\n')){
//             if (*str >= 'A' && *str <= 'Z') {
//                 *(s++) = *str - 'A' - 'a';
//             } else {
//                 *(s++) = *(str);
//             }
//         }
//         ++str;
//     }

//     while (*s_start)
//         *(str_start ++) = *(s_start);
//     free(s);
// }
// int is_palindrome(char *str){
//     char *str_start = str;
//     char *str_end = str +strlen(str) - 1;
//     while (str_start < str_end){
//         if (*(str_start++) != *(str_end--)) {
//             return 0;
//         }
//     }
//     return 1;
// }


// MI XOSQOV ESI CHI ASHXATUM