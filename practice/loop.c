#include <stdio.h>
#include <stdbool.h>

int main() {
    // for(int i = 0; i < 10; i++) { // i /= 2 in this case we use float not int
    //     printf("%d\n", i);
    // }

    // bool isHasCar = true;
    // int x = 0;
    // while(isHasCar) {
    //     printf("Enter a number: ");
    //     scanf("%d", &x); // &x stores the value we get from user
    //     if(x == 1)
    //         isHasCar = false;
    // }
    // printf("End of the loop\n");

    // bool isHasCar = false;
    // do {
    //     printf("YES\n");
    // } while(isHasCar);

    // for(int x = 0; x < 9; x++){
    //     // if(x == 3)
    //     //     break;

    //     if (x % 2 == 0)
    //         continue;
    //     printf("%d\n", x);
    // }


    int arr[] = {13, 33, 4, 9, 27};
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    int min = arr[0];
    int max = arr[0];
    for(int i = 0; i < 5; i++){
        if(arr[i] < min) 
            min = arr[i];
        if(arr[i] < max)
            max = arr[i];
    }

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    return 0;
}