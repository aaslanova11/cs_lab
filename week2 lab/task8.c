#include <stdio.h>

int main() {
    int n, i = 2;
    long long fib0 = 0, fib1 = 1, fib_next;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("The %dth Fibonacci number is: %lld\n", n, fib0);
        return 0;
    } else if (n == 1) {
        printf("The %dth Fibonacci number is: %lld\n", n, fib1);
        return 0;
    }

    while (i <= n) {
        fib_next = fib0 + fib1;  
        fib0 = fib1;  
        fib1 = fib_next;
        i++;  
    }

    printf("The %dth Fibonacci number is: %lld\n", n, fib_next);

    return 0;
}
