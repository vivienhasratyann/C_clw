#include <stdio.h>
#include <stdbool.h> // to work with booleans


int main() {
    int num; // автоматически присваивается цифра 0
    short s = 6; // от -32768 до 32768
    long l; // диапазон больше чем int, еще бывает long long х2

    unsigned short a = 5; // невозможно вписать отрицательное число
    unsigned int b; // аналогично

    int num = 4500; // или сами присваиваем число
    num = 6000;

    int x = 5, y = 10, res; // сразу через запятую создаем 3 переменные (или перед каждым пишем int)

    float f = 4.5f; // чтобы быть корректнее после числа ставим f
    double d = 5.41984654981; // длиннее диапазон

    char sym = 'f';  // только в одинарных ковычках

    bool has_car = true;

    x += 6;
    y *= 2;

    x -= 1;
    // or
    x--;

    x += 1;
    // or 
    x++;

    res = x + y;
    res = x - y;
    res = x / y;
    res = x * y;

    const short A = 0; // constant cannot be changed 

    float x = 5.5f, y = 6.6f, res;

    res = x / y;
    printf("Result: %.3f\n", res); 


    char s = "S";
    printf("%c\n", s); // c для char

    printf("Variable: %d + %d = %d", x, y, res); // буква после % обуславливается типом того, что мы хотим вывести; в данном случае это d = digit 


    float x, y, res;
    scanf("Enter first number: %f", &x); // we need pointers so we use '&'
    scanf("Enter second number: %f", &y); // 'scanf' is the same as 'input' in python

    res = x / y;
    printf("Result: %.3f\n", res); 

}