#include <stdio.h>

int main() {
    int a, b, c;

    
    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        printf("Numbers divisible by %d in the range [%d, %d]:\n", c, a, b);
        
        
        for (int i = a; i <= b; i++) {
            if (i % c == 0) {  
                printf("%d ", i);
            }
        }
        
        printf("\n");  
    }

    return 0;
}
