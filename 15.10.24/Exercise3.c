#include <stdio.h>

void copyarr(int *arr1, int *arr2, int size) {
    for (int i = 0; i < size; i++) {
        *(arr2 + i) = *(arr1 + i);    

        // How Pointer Arithmetic Works: 
        // source is the address of the first element: &source[0].
        // To access the second element: *(source + 1) or source[1].
        // For the third element: *(source + 2) or source[2].
        // The pointer doesn’t only limit you to the first element—it gives you access to the entire array by moving forward (or backward) in memory.


    }
}


int main(){
    int arr1[] = {0, 1, 1, 2, 3, 5, 8, 13};
    int size = 8;
    int arr2[size];

    copyarr (arr1, arr2, size);

    printf("copied array: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}

