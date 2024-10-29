#include <stdio.h>
#define SIZE 5

void swap(int *s, int *d);
void bubbleSort(int arr[], int n);


int main(){
    int arr[SIZE];

    printf("Enter the integers: \n");
    for (int i = 0; i < SIZE; ++i) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, SIZE);

    printf("The sorted array is: \n");
    for (int i = 0; i < SIZE; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void swap(int *s, int *d){
    int tmp = *s;
    *s = *d;
    *d = tmp;
}

void bubbleSort(int arr[], int n){
    for ( int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for ( int j = 0; j < n - 1 - i; ++j){
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
}