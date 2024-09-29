#include <stdio.h>

int main() {
    int a, b, k;
    int sum = 0;
    int current;

    printf("Enter the start of the range (a): ");
    scanf("%d", &a);

    printf("Enter the end of the range (b): ");
    scanf("%d", &b);

    printf("Enter the divisor (k): ");
    scanf("%d", &k);

    current = a;

    while (current <= b) {
        if (current % k == 0) {
            sum += current;
        }
        current++;
    }
    printf("The sum of numbers divisible by %d in the range [%d, %d] is: %d\n", k, a, b, sum);

    return 0;
}
