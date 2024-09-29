#include <stdio.h>

int main() {
    int n, i = 0;
    float number, sum = 0.0;

    printf("Enter the number of floating-point numbers (n): ");
    scanf("%d", &n);

    while (i < n) {
        printf("Enter a floating-point number: ");
        scanf("%f", &number);
        sum += number;  
        i++;  
    }

    printf("The sum of the floating-point numbers is: %.3f\n", sum);

    return 0;
}
