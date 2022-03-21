#include <utils1.h>

int isPrime(int n) {  // является ли число, поданное на вход, простым
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
}
