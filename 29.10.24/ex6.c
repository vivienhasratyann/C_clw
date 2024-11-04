// Write a function calculateAverage(int *arr, int n) that calculates and returns the average of elements in an array using pointer arithmetic. In main, read 5 integers into an array, call calculateAverage, and display the average.
#include <stdio.h>

float calculateAverage(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i); 
    }
    return (float)sum / n; 
}

int main() {
    int arr[5];
    
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    float average = calculateAverage(arr, 5);
    printf("The average is: %.2f\n", average);
    
    return 0;
}
