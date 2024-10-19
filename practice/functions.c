#include "my_functions.h" 
// for file to be more clean we write prototype here and the real function in the end after the main() function; also we can create a .h file to store all our functions and then call them by #include; i did it by creating 'my_functions.h' file now i am going to store all my fucntions there and then call them in main here

void info(); // we use void if our function doesn't return us anything

void sum(int a , int b);
void string(char arr[]);

int main(){ // what is beyond the main doesn't work
    sum(20, 50);
    int x = 5, y = 7;
    sum(x,y);

    string("Hola");
    char word[] = {'h', 'o', 'l', 'a'};
    string(word);

    int result = mult(23, 6);
    printf("The result is: %d\n", result);

    return 0;
}



