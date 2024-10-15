#include <stdio.h>

void doubleValue(int *num) {
    *num = *num * 2;
}

int main() {
    int n;
    printf("Please provide integer value: ");
    scanf("%d", &n);

    doubleValue(&n);

    printf("Doubled value: %d\n", n);

    return 0;
}
