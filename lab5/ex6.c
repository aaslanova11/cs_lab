#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive integer between 1 and 10: ");
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j % 2 == 1) {
                
                printf("%d ", j);
            } else {
                
                printf("%c ", 'A' + j - 1);  
            }
        }
        printf("\n");  
    }

    return 0;
}
