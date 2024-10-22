#include <stdio.h>

#define MAX_SIZE 50

void copyArr(int *arr1, int *arr2, int *size){
    int i;
    for (i = 0; i < *size; i++){
        *(arr2+i) = *(arr1+i);
    }
    *size = i;
}

int main(){
    int size;
    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];
    int i;

    printf("specify array size(<=50): ");
    scanf("%d", &size);

    printf("write array elements: \n");
    for (i = 0; i < size; ++i)
        scanf("%d", arr1+i);

    copyArr(arr1, arr2, &size);
    printf("Values of copied array: \n");
    for (i = 0; i < size; i++)
        printf("%d\n", *(arr2+i));

    return 0;
}

