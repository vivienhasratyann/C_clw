#include <stdio.h>
# include <stdbool.h>

void to_str(int n,char s[]);

int main()
{
    int number;
    char str_number[32];
    printf("Please enter integer value: ");
    scanf("%d", &number);

    to_str(number, str_number);

    printf("String representation of the integer value is %s", str_number);
    
    return 0;
}

void to_str(int n, char s[]){
    int i = 0;
    _Bool is_negative = false;

    if (n<0) {
        is_negative = true;
        n = -n;
    }

    while(n/10){
        s[i++] = n%10 + '0';
        n = n /10;

    }
    s[i++] = n%10 + '0';
    if (is_negative)
        s[i++] = '-';
    s[i] = '\0';

    for (int j = i - 1, k = 0; k < j; ++k, --j) {
        int tmp = s[k];
        s[k] = s[j];
        s[j] = tmp;
    }
}
