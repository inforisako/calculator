#include <stdio.h>
#include <limits.h>


int add(int a, int b) {
    if (b > 0 && a > INT_MAX - b) return INT_MAX;
    if (b < 0 && a < INT_MIN - b) return INT_MIN;
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) return 0;
    return a / b;
}

int power(int a, int b) {
    if (b < 0) return 0;
    int result = 1;
    for (int i = 0; i < b; i++) {
        result = result * a;
    }
    return result;
}
