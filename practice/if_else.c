#include <stdio.h>
#include <stdbool.h>

int main() {
    int  x = 5;

    if(x < 5 || x == 2) {  // || = or; 
        printf("X is less than 5\n");
    } 
    else if(x > 5 && x < 10) // && = and;
    // If in loop is only one line of code we can skip the {}
        printf("X is greater than 5\n"); // we can write another if else loops in if else loop
    else {
        printf("X is 5\n");
    }

    bool hasCar = true;
    if (hasCar == true) // or if(hasCar);
        printf("Yes\n ");
    else if (hasCar != true); // if(!hasCar)
        printf("No\n");



    int y = 100;

    switch(y) {
        case 10:
            printf("10\n");
            break;
        case 12:
            printf("12\n");
            break;
        case 15:
            printf("15\n");
            break;
        case 20:
            printf("20\n");
            break;
        default:
            printf("Error\n");
            break;
    }

    return 0;
}