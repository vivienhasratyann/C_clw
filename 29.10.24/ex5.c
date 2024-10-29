#include <stdio.h>
#define SIZE 5

void reverseArray(char *arr, int n) {
    char *start = arr;                
    char *end = arr + n - 1; 

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;  
        end--;    
    }
}

int main(){
    char arr[SIZE];

    printf("Enter array elements: ");
    for (int i = 0; i < SIZE; i++){
        scanf("%c", &arr[i]);
    }

    printf("Initial array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");

    reverseArray(arr, SIZE);

    printf("Reversed array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");

    return 0;
}