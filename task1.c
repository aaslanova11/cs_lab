#include <stdio.h>

int main() {
    int n, i = 1, sum = 0, product = 1, term;
 
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    while (i <= n) {
        term = 3 * i - 1;
        sum += term;
        product *= term;
        i++;  
    }
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}
