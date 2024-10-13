#include <stdio.h>

int main() {
    int x, y;

    while (scanf("%d %d", &x, &y) != EOF) {
        int f0 = 0, f1 = 1, fn = 0;  
        int found = 0;  

        
        while (fn <= y) {
            if (fn >= x && fn <= y) {
                printf("%d ", fn);  
                found = 1;  
            }

            
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }

        if (!found) {
            printf("DO NOT EXIST");  
        }

        printf("\n"); 
    }

    return 0;
}
