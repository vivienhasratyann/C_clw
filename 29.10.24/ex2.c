#include <stdio.h>

int main(){
    int arr[6];

    printf("Enter the array elements: ");
    for (int i = 0; i < 6; i++){
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < 6; i += 2) {
        sum += arr[i];
    }

    printf("Sum of elements at even indices: %d\n", sum);

    return 0;
    
}