#include <stdio.h>

void copyArray(int *source, int *destination, int size) {
    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + i);  
    }
}

int main() {
    int sourceArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(sourceArray) / sizeof(sourceArray[0]);
    int destinationArray[size];  
    copyArray(sourceArray, destinationArray, size);

    printf("Contents of the destination array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(destinationArray + i));  
    }
    printf("\n");

    return 0;
}

