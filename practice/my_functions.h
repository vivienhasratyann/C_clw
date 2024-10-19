#include <stdio.h>

void info(){
    printf("Bonjour\n");
    printf("a\n");
    printf("tous\n");
}

void sum(int a, int b){
    int res = a+ b;
    printf("Result: %d\n", res);
}

void string(char arr[]){
    printf("%s\n", arr);
}

int mult (int a, int b){
    int res = a * b;
    printf("Result: %d\n", res);
    return res;
}