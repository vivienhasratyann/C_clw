#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

void performOperation(int x, int y, int (*operation)(int, int)) {
    printf("Result: %d\n", operation(x,y));
}

int main(){
    int x = 10, y = 5;
    printf("Calling add as callback:\n");
    performOperation(x, y, &add);
    printf("Calling subtract as callback:\n");
    performOperation(x, y, &subtract);
    return 0;
}


