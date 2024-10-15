#include <stdio.h>

int fib_num(int n){
    if (n <= 1)
        return n;
    else
        return fib_num(n-2) + fib_num(n-1);
}

int main(){
    int n;

    // Ask the user to input the value of n
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);

    // Declare an array to store the Fibonacci numbers
    int arr[n];

    // Generate the Fibonacci sequence and store it in the array
    for (int i = 0; i < n; i++) {
        arr[i] = fib_num(i);
    }

    // Print the Fibonacci sequence
    printf("Fibonacci sequence: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
