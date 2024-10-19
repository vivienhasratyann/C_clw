#include <stdio.h>

// pointer helps to point to address of variable and not the variable itself (it can be array and anything else)


struct Abstract {
    int width, height;
};

void calc(struct Abstract *obj);


int main() {

    int num = 0;
    int * pNum = &num; // this contains address of variable, to get the address we use "&"

    printf("%p\n", pNum);
    printf("%d\n", *pNum); // через звездочку(указатель) мы ссылаемся на определенный адрес в памяти компьютера и по этому адресу мы выходим на значение
    // с указателем команда обрабатывается быстрее

    *pNum = 10;
    printf("%d - %d\n", *pNum, num);

    struct Abstract square = {5,7};
    calc(&square);

    return 0;
}

void calc(struct Abstract *obj) {
    int res = obj->width * obj->height;
    printf("Result: %d\n", res);
}