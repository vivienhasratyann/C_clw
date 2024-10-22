#include <stdio.h> 
 
// 1. Function returning a pointer to int 
int *f() { 
    static int value = 10;  // Static so that it persists after returning 
    return &value; 
} 
 
// 2. Pointer to a function returning int 
int someFunction() { 
    return 20; 
} 
 
int (*pf)() = someFunction;  // Pointer to function that returns int 
 
// 3. Pointer to pointer to char (commonly used for argument lists) 
char **argv; 
 
// 4. Pointer to an array of 13 integers 
int (*daytab1)[13]; 
 
// 5. Array of 13 pointers to integers 
int *daytab2[13]; 
 
// 6. Function returning a pointer to void 
void *comp() { 
    return NULL;  // Returning a void pointer 
} 
 
// 7. Pointer to a function returning void 
void someVoidFunction() { 
    printf("Function that returns void\n"); 
} 
 
void (*compPtr)() = someVoidFunction;  // Pointer to function returning void 
 
// 8. Function returning a pointer to an array of pointers to functions returning char 
char (*(*x())[])() { 
    static char (*array_of_functions[5])(); 
    return &array_of_functions; 
} 
 
// 9. Array of 3 pointers to functions returning pointers to arrays of 5 chars 
char (*(*xArr[3])())[5]; 
 
int main() { 
    // Example usage of the functions and pointers: 
 
    // 1. Using the function returning a pointer to int 
    int *p = f(); 
    printf("Value from f(): %d\n", *p); 
 
    // 2. Using pointer to a function returning int 
    printf("Value from pf(): %d\n", pf()); 
 
    // 6. Using the function pointer returning void 
    compPtr(); 
 
    return 0; 
}