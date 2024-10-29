#include <stdio.h>

#define SIZE 8

void copyString(char *source, char *destination){
    while(*source){
        *(destination ++) = *(source ++);
    }
    *destination = '\0';

}

int main(){
    char arr1[SIZE + 1];  // +1 to accommodate the null terminator
    char arr2[SIZE + 1];  // +1 to accommodate the null terminator


    printf("write array elements: \n");
    for (int i = 0; i < SIZE; ++i)
        scanf(" %c", arr1+i);
    arr1[SIZE] = '\0';

    copyString(arr1, arr2);

    printf("Values of copied array: \n");
    for (int i = 0; i < SIZE; i++)
        printf("%c ", *(arr2+i));
    printf("\n");

    return 0;
}