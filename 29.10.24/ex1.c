#include <stdio.h>
#define MAX 10

void min_max(int array[MAX], int *min, int *max){
    *min = array[0];
    *max = array[0];

    for (int i = 1; i < 10; i++){
        if (array[i] < *min){
            *min = array[i];
        }
        if (array[i] > *max){
            *max = array[i];
        }   
    }
}

int main(){
    int array[MAX];
    int x;
    int min, max;

    printf("Enter number: ");
    for (int i = 0; i < MAX; i++){
        scanf("%d\n", &array[i]);
    }

    printf("My array: ");
    for (int i = 0; i < MAX; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    min_max(array, &min, &max);

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);



    return 0;
}