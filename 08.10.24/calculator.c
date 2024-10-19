#include <stdio.h>

int main()
{
    float number1;
    float number2;
    char op;

    scanf_s("Enter number 1: ", &number1);
    scanf_s("Enter number 2: ", &number2);
    scanf_s("Enter operation type: ", &op);

    switch (op)
    {
    case '+':
        printf("a + b = %f", number1 + number2);
        break;

    case '-':
        printf("a - b = %f", number1 - number2);
        break;

    case '*':
        printf("a * b = %f", number1 * number2);
        break;

    case '/':
        printf("a / b = %f", number1 / number2);
        break;
    
    }
    return 0;
}
