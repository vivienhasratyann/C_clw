#include <stdio.h>

#define SIZE 50

double average(int *arr, int size){
    double av;
    av = (double)sum(arr, size) / size;  
    return av;
}

int sum(int *arr, int size){
    int s = 0;
    for (int i = 0; i < size; i++){
        s += *(arr + i);
    }
    return s;
}

int main(){
    int arr[SIZE];
    int size;

    printf("Specify array size (<= 50):");
    scanf("%d", &size);

    printf("Specify array elements\n");
    for (int i = 0; i < size; i++)
        scanf("%d", arr + i);

    printf("The average of the array elements is: %f\n", average(arr, size));
    printf("The sum of the array elememts is: %d\n", sum(arr, size));

    return 0;
}