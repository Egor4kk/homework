#include "utils.h"

size_t timer_from(int from) {
    size_t counter = 0;
    int i = from;
    if (i <= 0) {
        return 0;
    } else {
        do {
            ++counter;
            printf("%d ", i);
            i--;
        } while (i >= 1);
        ++counter;
        printf("%d\n", i);
    }
    return counter;
}


/*int custom_power(int base, int power) {  // возвращает результат возведения base в степень pow
    int a = 0;
    a = pow(base, power);
    return a;
}*/
int custom_power(int base, int power) {
    int result;
    int i;
    result = 1;
    for (i = 1; i <= power; i++) {
        result = result*base;
    }
    return result;
}

/*int isPrime(int n) {  // является ли число, поданное на вход, простым
    if (n > 1) {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                return 0;
            }
        }
        return 1;
    } else {
        return 0;
    }
}

void Factorial(int x) {  // выводит через пробел все целые числа от 1 до n
    if (x > 1) {
        Factorial(x-1);
        printf(" ");
    } else if (x < 1) {
        Factorial(x+1);
        printf(" ");
    }
    printf("%d", x);
}*/
