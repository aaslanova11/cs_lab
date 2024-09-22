#include <stdio.h>

int main() {
    int x, y;

    printf("Enter x: ");
    scanf("%d", &x);

    if (x > 0) {
        y = x * x - 2 * x + 3;  
    } else if (x == 0) {
        y = x - 5;              
    } else {
        y = x * x + 2 * x - 3;  
    }

    printf("y = %d\n", y);
    
    return 0;
}