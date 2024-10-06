#include <stdio.h>

int main() {
    int n, i, j;

    
    printf("Enter the size of the square (n): ");
    scanf("%d", &n);

    
    for (i = 1; i <= n; i++) {
        
        for (j = i; j <= n * n; j += n) {
            printf("%d ", j);  
        }
        printf("\n");  
    }

    return 0;
}
