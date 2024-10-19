#include <stdio.h>

int main() {
    int arr[] = {5, 7, 2, 56, 34}; // if i initialize array imediately i may not write quantity of elements
    arr[0] = 89; // we can use any element of array by calling it by it's index (starting from 0)
    printf("%d\n", arr[0]);

    float numbers[3];
    numbers[0] = 5.4f;
    numbers[1] = 3.27f;
    numbers[2] = 61.7f;

    char word[] = {'A','r','e','l','i'};
    char words[] = "Hello World"; // double quotes; every symbol is an element of a array

    words[1] = 'g';
    printf("%s\n", words);
    printf("%c\n", words[0]); //printing only one symbol


    int array[3][2] = {  // two-dimensional array and there are infinity dimensional array
        {4, 5},
        {1, 2},
        {7, 8}
    };

    array[1][1] = 6;
    printf("%d\n", array[1][1]);

    return 0;
}