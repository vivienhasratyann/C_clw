#include <stdio.h>
#define SIZE 5

int sumArray(int arr[], int n){
    // recursive Karon kbacatri 
    // if (n == 0) return 0;    // ete bolori sum-y
    // return arr[n-1] + sumArray(arr, n-1);

    if (n==1){
        return arr[n-1];    // ete demi n hatiky
    }else{
        return arr[n-1] + sumArray (arr, n-1);
    }
}


int main(){
    int arr[SIZE];
    int x;

    printf("Enter the elements of array: ");
    for (int i = 0; i < SIZE; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("My array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int sum = sumArray(arr, SIZE);

    printf("The sum of the array: %d\n", sum);

    return 0;
}

// do the same with do while