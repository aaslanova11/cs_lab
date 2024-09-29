#include <stdio.h>

int main() {
    int n, i = 1;
    double harmonic_sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n) {
        harmonic_sum += 1.0 / i;  
        i++;  
    }

    printf("The harmonic sum for n = %d is: %.3lf\n", n, harmonic_sum);

    return 0;
}
