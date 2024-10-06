#include <stdio.h>

int main() {
    int n, i, sum = 0, product = 1;
    
     scanf("%d", &n);
    
    
    for (i = 1; i <= n; i++) {
        sum += 2 * i + 1;
        product *= 2 * i + 1;
    }

    printf("%d %d\n", sum, product);

    return 0;
}
